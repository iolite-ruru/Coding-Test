#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
		int row = 0, col = -1, num = 1;
		int forward = n; //몇 칸 전진할 것인지
		int sign = 1; //1 또는 -1을 가짐
	
		int** arr = (int **)malloc(sizeof(int *) * n); //2차원 동적 할당
		arr[0] = (int *)malloc(sizeof(int) * n * n);
		for(int i=1; i<n; i++)
			arr[i] = arr[i-1] + n;
	
		for(int i=0; i<n; i++) //초기화를 하지 않으면 답에 오류가 생김
			for(int j=0; j<n; j++)
				arr[i][j] = 0;

		while(forward != 0){
			for(int i=0; i<forward; i++){
				col += sign;
				arr[row][col] = num++;
			}
			
			forward--;
			if(forward == 0) break;
			
			for(int i=0; i<forward; i++){
				row += sign;
				arr[row][col] = num++;
			}
			sign *= -1; //부호를 바꿈
		}
	
	  for(int i=0; i<n; i++){
			answer += arr[i][i];
		}
		
		free(arr[0]);
		free(arr);
	
    return answer;
}

int main() {
    int n1 = 3;
    int ret1 = solution(n1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);
    
    int n2 = 2;
    int ret2 = solution(n2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
