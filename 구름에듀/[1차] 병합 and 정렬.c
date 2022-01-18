#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arrA[], int arrA_len, int arrB[], int arrB_len) {
    int arrA_idx = 0, arrB_idx = 0;
    int* answer = (int*)malloc(sizeof(int)*(arrA_len + arrB_len));
    int answer_idx = 0;
    while(arrA_idx < arrA_len && arrB_idx < arrB_len){
        if(arrA[arrA_idx] < arrB[arrB_idx])
            answer[answer_idx++] = arrA[arrA_idx++];
        else
            answer[answer_idx++] = arrB[arrB_idx++];
    }
    while(arrA_idx < arrA_len)
        answer[answer_idx++] = arrA[arrA_idx++];
    while(arrB_idx < arrB_len)
        answer[answer_idx++] = arrB[arrB_idx++];
    return answer;
}

int main() {
    int arrA[4] = {-2, 3, 5, 9};
    int arrA_len = 4;
    int arrB[3] = {0, 1, 5};
    int arrB_len = 3;
    int* ret = solution(arrA, arrA_len, arrB, arrB_len);

    printf("solution 함수의 반환 값은 [");
    for(int i = 0; i < 7; i++){
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}
