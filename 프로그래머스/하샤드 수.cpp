#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int original = x;
    int sum = 0;

    while(x != 0){
        sum += x%10;
        x /= 10;
    }
    
    if(original % sum != 0) answer = false;
    return answer;
}
