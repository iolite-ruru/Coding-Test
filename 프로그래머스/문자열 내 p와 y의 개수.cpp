#include <string>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCnt = 0;
    int yCnt = 0;
    for(int i=0; i<s.size(); i++){
        char temp = s[i];
        if(temp == 'p' || temp == 'P') pCnt++;
        else if(temp == 'y' || temp == 'Y') yCnt++;
    }
    
    if(pCnt == yCnt) answer = true;
    else answer = false;

    return answer;
}
