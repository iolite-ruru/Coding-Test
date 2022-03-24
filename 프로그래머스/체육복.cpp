#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();
    //정렬이 되어있지 않은 경우
    //lost가 reserve에 포함되어있는 경우
    //for문을 두 개로 나눌 것
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    for(int i=0; i<lost.size(); i++){
        for(int j=0; j<reserve.size(); j++){
            if(lost[i] == reserve[j]){
                answer++;
                lost[i] = -1;
                reserve[j] = -1;
                break;
            }
        }
     }
  
    for(int i=0; i<lost.size(); i++){
        for(int j=0; j<reserve.size(); j++){
            if(lost[i] == reserve[j]+1 || lost[i] == reserve[j]-1){
                answer++;
                lost[i] = -1;
                reserve[j] = -1;
                break;
            }
        }
    }
    return answer;
}
