#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> chk(n + 1, true); //0, 1번 인덱스는 사용 Xx
    
    for(int i=2; i<=n; i++){
        if(!chk[i]) continue;
        for(int j=2*i; j<=n; j+=i){
            chk[j] = false;   
        }
    }
    
    for(int i=2; i<=n; i++){
        if(chk[i]) answer++;
    }
    
    return answer;
}
