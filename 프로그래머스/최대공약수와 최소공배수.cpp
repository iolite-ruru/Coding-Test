#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int z;
    int a = n;
    int b = m;
    
    while(b){
        z = a%b;
        a = b;
        b = z;
    }
    answer.push_back(a);
    answer.push_back(n*m/a);
    
    return answer;
}
