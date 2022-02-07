#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(char* s) {
    char* answer = (char*)malloc(sizeof(char) * (strlen(s) * 2 + 1));
    int answer_idx = 0;
    char previous = tolower(s[0]);
    int counter = 1;

    for(int i=1; i<strlen(s); i++) {
        if(tolower(s[i]) == previous)
            counter++;
        else {
            answer[answer_idx++] = previous;
            answer[answer_idx++] = counter + '0';
            counter = 1;
            previous = tolower(s[i]);
        }
    }
    answer[answer_idx++] = tolower(previous);
    answer[answer_idx++] = counter + '0';
    answer[answer_idx++] = '\0';
    return answer;
}

int main() {
    char* s = "YYYYYbbbBbbBBBMmmM";
    char* ret = solution(s);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}
