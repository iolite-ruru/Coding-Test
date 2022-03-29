#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    if(s.front() == '-'){
        answer = stoi(s.substr(1)) * -1;
    }else{
        answer = stoi(s);
    }
    
    return answer;
}
