#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* s) {
    char* answer = (char*)malloc(sizeof(char)*1001);
    int idx = 0, length = strlen(s);
    for(int i = 0; i < length; ++i){
        if (s[i] == '0' && s[i+1] != '0')
            answer[idx++] = '0';
        else if(s[i]=='1')
            answer[idx++] = '1';
    }
    answer[idx] = 0;
    return answer;
}

int main() {
    char* s = "101100011100";
    char* ret = solution(s);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}
