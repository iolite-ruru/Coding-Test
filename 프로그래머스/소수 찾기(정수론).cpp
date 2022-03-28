#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    if(n >= 2) answer++;
    for(int i=3; i<=n; i++){
        if(i % 2 == 0) goto skip;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j == 0){
                goto skip;
            }    
        }
        answer++;
        skip: ;
    }
    return answer;
}
