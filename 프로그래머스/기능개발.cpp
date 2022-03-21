#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int start = 0;
    
    while(start <= progresses.size()-1){
        int cnt = 0;
        for(int i = start; i<progresses.size(); i++){
            progresses[i] += speeds[i];
            if(progresses[i] >= 100 && start == i){
                start++;
                cnt++;
            }
        }
        if(cnt != 0){
            answer.push_back(cnt);    
        }
    }
    return answer;
}
