#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    answer = (double)accumulate(arr.begin(), arr.end(), 0) / arr.size();
    
    return answer;
}
