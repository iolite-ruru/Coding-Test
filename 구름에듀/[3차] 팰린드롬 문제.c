#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* substr(char *s, int start_idx, int cnt) {
    char* sub_s = (char*) malloc(sizeof(char) * (cnt + 1));
    strncpy(sub_s, s + start_idx, cnt);
    sub_s[cnt] = '\0';
    return sub_s;
}

int compare(const void* first, const void* second) {
    return (strcmp(*(char**)first, *(char**)second));
}

bool func_a(char* list[], int list_len, char* s) {
    for (int i = 0; i < list_len; i++)
        if (strcmp(list[i], s) == 0)
            return true;
    return false;
}

bool func_b(char* s) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++)
        if (s[i] != s[length - i - 1])
            return false;
    return true;
}

char* func_c(char* palindromes[], int palindromes_cnt, int k) {
    qsort(palindromes, palindromes_cnt, sizeof(char*), compare);
    if (palindromes_cnt < k)
        return "NULL";
    else
        return palindromes[k - 1];
}
char* solution(char* s, int k) {    
    char* palindromes[5050];
    int palindromes_cnt = 0;
    int length = strlen(s);
    for (int start_idx = 0; start_idx < length; start_idx++) {
        for (int cnt = 1; cnt < length - start_idx + 1; cnt++) {
            char* sub_s = substr(s, start_idx, cnt);
            if (func_b(sub_s)) {
                if (func_a(palindromes, palindromes_cnt, sub_s) == false)
                    palindromes[palindromes_cnt++] = sub_s;
            }
        }
    }

    char* answer = func_c(palindromes, palindromes_cnt, k);
    return answer;
}

int main() {
    char* s1 = "abcba";
    int k1 = 4;
    char* ret1 = solution(s1, k1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    char* s2 = "ccddcc";
    int k2 = 7;
    char* ret2 = solution(s2, k2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}
