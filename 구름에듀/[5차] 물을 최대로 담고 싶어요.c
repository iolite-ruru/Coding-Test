#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int walls[][2], int walls_len) {
    int answer = 0;

    for(int i = 0; i < walls_len; i++) {
    	for(int j = i+1; j < walls_len; j++) {
    		int area = 0;
    		if(walls[i][1] < walls[j][1])
    			area = walls[i][1] * (walls[j][0] - walls[i][0]);
    		else
    			area = walls[j][1] * (walls[j][0] - walls[i][0]);

    		if(answer < area)
    			answer = area;
    	}
    }

    return answer;
}

int main() {
	int walls[][2] = {{1, 4}, {2, 6}, {3, 5}, {5, 3}, {6, 2}};
	int walls_len = 5;
	int ret = solution(walls, walls_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
