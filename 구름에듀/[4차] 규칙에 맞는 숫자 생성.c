#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char* number) {
    char* reverse_number = (char*)malloc(sizeof(char) * (strlen(number)+2));
    int j = 0;
    for(int i = strlen(number)-1; i >= 0; i--, j++)
        reverse_number[j] = number[i];
    reverse_number[j] = '\0';
    free(number);
    return reverse_number;
}

char* solution(int n) {
    char* answer = (char*)malloc(sizeof(char) * (n+1));
    for(int i = 0; i < n; i++) {
        answer[i] = i+'1'; //문자로 대입해줘야 하기 때문
        answer[i+1] = '\0';
        answer = reverse(answer);
    }
    return answer;
}

int main() {
    int n = 5;
    char* ret = solution(n);    
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}
