#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*10);
    int index = -1;
    
    for(int i=0; i<numbers_len; i++){
        answer[i] = 0;
    }
    
    for(int i=0; i<numbers_len-1; i++){
        for(int j=i+1; j<numbers_len; j++){
            answer[++index] = numbers[i] + numbers[j];
            for(int k=0; k<=index-1; k++){
                if(answer[index]==answer[k]) {
                    index--;
                    break;
                }
            }
        }
    }
    //정렬
    for(int i=0; i<=index-1; i++){
        for(int j=i+1; j<=index; j++){
            if(answer[i]>answer[j]){
                int temp = answer[j];
                answer[j] = answer[i];
                answer[i] = temp;
            }
        }
    }
    return answer;
}
