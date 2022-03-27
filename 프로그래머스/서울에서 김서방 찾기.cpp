#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int i;
    for(i=0; i<seoul.size(); i++){
        if(seoul[i].compare("Kim") == 0) break;
    }
    answer = "김서방은 "+ to_string(i) +"에 있다";
    return answer;
}
