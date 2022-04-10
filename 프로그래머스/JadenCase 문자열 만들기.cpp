#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    if(s[0]>='a' && s[0]<='z'){
        answer += toupper(s[0]);
    }else answer += s[0];
    
    for(int i=1; i<s.size(); i++){
        if((s[i]>='a' && s[i]<='z' )|| (s[i]>='A' && s[i]<='Z')){
             if(s[i-1] == ' '){
                answer += toupper(s[i]);
            }else answer += tolower(s[i]);
        }else answer += s[i];
        
    }
    return answer;
}
