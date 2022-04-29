#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> answerSet;
    int numbers_len = numbers.size();
    
    for(int i=0; i<numbers_len-1; i++){
        for(int j=i+1; j<numbers_len; j++){
            answerSet.insert(numbers[i] + numbers[j]);
        }
    }
    vector<int> answer(answerSet.begin(), answerSet.end());

    return answer;
}
