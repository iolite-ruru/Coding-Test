#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> v;
    //vector<int> v(nums);
    //v.erase(unique(v.begin(), v.end()), v.end());
    for(int i=0; i<nums.size();i++){
        v.insert(nums[i]);
    }
    int numsHalfLen = nums.size() / 2;
    int vLen = v.size();
    answer = min(numsHalfLen, vLen);
    return answer;
}
