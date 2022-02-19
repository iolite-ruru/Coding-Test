#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    while(n != 0){
        int num = n % 3; //0, 1, 2
        n /= 3;
        if(num%3 == 0){
            n--;
            answer += "4";
        }
        else answer += to_string(num);
    }
    reverse(answer.begin(), answer.end()); //algorithm에서 지원하는 reverse
    return answer;
}
