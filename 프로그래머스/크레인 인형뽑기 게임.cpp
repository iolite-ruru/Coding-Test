#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int vectorSize = board.size();
    int cnt = 0;
    stack<int> basket;
    
    for(int i=0; i<moves.size(); i++){
        for(int j=0; j<vectorSize; j++){
            int col = moves[i]-1;
            if(board[j][col] != 0){
                int current = board[j][col];
                board[j][col] = 0;
                
                if(!basket.empty() && basket.top() == current){
                    basket.pop();
                    cnt += 2;
                }else{
                    basket.push(current);
                }
                break;
            }
        }
    }
    answer = cnt;
    return answer;
}
