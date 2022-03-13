#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(), 0);
    stack<int> stack;
    for(int i=0; i<prices.size(); i++){
        if(stack.empty() || stack.top()<=prices[i]){
            stack.push(prices[i]);
        } else {
            for(int j=0; j<stack.size(); j++){
                if(stack.top() > prices[i]){
                    answer.push_back(1);
                    stack.pop();
                }else break;
            }
        }
    }
    return answer;
}
