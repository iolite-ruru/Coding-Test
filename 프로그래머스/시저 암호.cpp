#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++){
        char temp = s[i] + n;
        if(s[i] == ' ') answer += " ";
        else if(s[i]<='Z' && (temp > 'Z' || temp < 'A')) answer += temp - 26;
        else if(s[i]>='a' && (temp > 'z' || temp < 'a')) answer += temp - 26;
        else answer += temp;
    }
    
    return answer;
}
