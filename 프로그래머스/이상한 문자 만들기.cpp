#include <string>
#include <ctype.h>

using namespace std;

string solution(string s) {
    string answer = "";
    bool flag = true;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            answer += " ";
            flag = true;
            continue;
        }
        if(flag)
            answer += toupper(s[i]); //****************
        else
            answer += tolower(s[i]);
        flag = !flag;
    }
    return answer;
}
