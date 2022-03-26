#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long longNumber = num; //*****
    
    while(longNumber != 1){
        if(longNumber % 2 == 0) longNumber /= 2;
        else longNumber = longNumber*3 + 1;
        answer++;
        if(answer == 500){
            answer = -1;
            break;
        }
    }
    
    return answer;
}
