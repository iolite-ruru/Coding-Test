#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> temp;
    for(int i=0; i<s.length(); i++){
        if(temp.empty() || temp.top()!=s[i]) temp.push(s[i]);
        else if(temp.top()==s[i]) temp.pop();
    }
    
    if(temp.empty()) answer = 1;
    else answer = 0;
    
    return answer;
}
