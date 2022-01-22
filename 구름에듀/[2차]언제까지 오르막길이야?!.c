#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len) {
    int answer = 0;
	  int max = 0, len = 1;
		for(int i=0; i<arr_len-1; i++){
			if(arr[i] < arr[i+1]){
				len++;
				max = (len>max) ? len : max;
			}else{
				len = 1;
			}
		}
		if(max < 2) answer = 1;
		else answer = max;
	
    return answer;
}

int main() {
    int arr[10] = {3, 1, 2, 4, 5, 1, 2, 2, 3, 4};
    int arr_len = 10;
    int ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
