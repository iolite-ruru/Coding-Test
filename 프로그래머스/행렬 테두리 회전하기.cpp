#include <string>
#include <vector>
#include <set>

using namespace std;

int Rotate(vector<vector<int>>& vec, int x1, int y1, int x2, int y2){
    set<int> num;
    
}

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    
    vector<vector<int>> vec(rows, vector<int>(columns, 0));
    int row = 0, col = -1, num = 1;
    int sign = 1;
    int goRow = rows, goCol = columns;
    
    while(goRow != 0 && goCol != 0){
        for(int i=0; i<goCol; i++){
            col += sign;
            vec[row][col] = num++;
        }
        
        goCol--;
        if(goRow == 0 && goCol == 0) break;
        
        for(int i = 0; i<goRow; i++){
            row += sign;
            vec[row][col] = num++;
        }
        goRow--;
        sign *= -1;
    }
    
    for(int i=0; i<queries.size(); i++){
        answer.push_back(Rotate(vec, queries[i][0], queries[i][1], queries[i][2], queries[i][3]));
    }
    return answer;
}
