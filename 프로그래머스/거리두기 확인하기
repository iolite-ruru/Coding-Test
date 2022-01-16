#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

const int pos[][4] = {
    { 0, -1, 0, 1 },
    {-1, 0, 1, 0 }
};

int func(vector<string>& room, int x, int y) {
    int currentX, currentY, distance = 0;
    bool chk[5][5] = {false, };
    
    queue<int> qx;
    queue<int> qy;

    qx.push(x);
    qy.push(y);
    
    chk[x][y] = true;

    while (!qx.empty()) {
        for (int i = 0; i < 4; i++) {
            currentX = qx.front() + pos[0][i];
            currentY = qy.front() + pos[1][i];

            if (chk[currentX][currentY] || room[currentX][currentY] == 'X' || currentX < 0 || currentX > 4 || currentY < 0 || currentY > 4) {
                continue;
            }

            distance = abs(currentX - x) + abs(currentY - y); //*********

            if (room[currentX][currentY] == 'P' && distance <= 2) {
                return 0;
            }
            if (room[currentX][currentY] == 'O' && distance < 2) {
                qx.push(currentX);
                qy.push(currentY);
                chk[currentX][currentY] = true;
            }
        }
        qx.pop();
        qy.pop();
    }
    return 1;
}

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    int temp;

    for (int i = 0; i < 5; i++) {
        vector<string> room = places[i];
        temp = 1;
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                if (room[j][k] == 'P') {
                    temp = func(room, j, k);
                    if(!temp) break;
                }
            }
            if(!temp) break;
        }
        answer.push_back(temp);
    }
    return answer;
}
