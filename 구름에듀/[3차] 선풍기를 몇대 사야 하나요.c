#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int k, int student[], int student_len) {
    int answer = 0;
    for(int i = 0; i < student_len; i++){
        student[i] -= 4*k;
        if(student[i] <= 0)
            continue;
        // +K: 아래 연산에서 나머지가 생기는 경우를 막기 위함
        // -1: 나머지가 발생하지 않을 때, 발생하는 연산 오류를 막기 위함
        answer += (student[i] + k - 1) / k; //**주의**
    }
    return answer;
}

int main() {
    int k1 = 1;
    int student1[4] = {4, 4, 4, 4};
    int ret1 = solution(k1, student1, 4);
    
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);
    
    int k2 = 3;
    int student2[5] = {15, 17, 19, 10, 23};
    int ret2 = solution(k2, student2, 5);
    
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
