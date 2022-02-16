#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int col = arr1.size();
    int row = arr1[0].size();
    vector<vector<int>> answer(col, vector<int>(row, 0));
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return answer;
}
