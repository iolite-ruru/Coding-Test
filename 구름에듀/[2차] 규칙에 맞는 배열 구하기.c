#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], int arr_len) {
    int left = 0, right = arr_len - 1;
    int idx = 0;
    int* answer = (int*)malloc(sizeof(int)*arr_len);
    while(left <= right){
        if(idx % 2 == 0){
            answer[idx] = arr[left];
            left += 1;
        }
        else{
            answer[idx] = arr[right];
            right -= 1;
        }
        idx += 1;
    }
    return answer;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arr_len = 6;
    int* ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 [");
    for(int i = 0; i < 6; i++){
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}
