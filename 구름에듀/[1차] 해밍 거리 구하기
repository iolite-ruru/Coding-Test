#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* func_a(char* str, int len){
    char* padZero = (char*)malloc(sizeof(char)*(len+1));
    for(int i = 0; i < len+1; i++)
        padZero[i] = 0;
    int padSize = len-strlen(str);
    for(int i = 0; i < padSize; i++)
        padZero[i] = '0';
    strcat(padZero, str);
    return padZero;
}
int max(int a, int b){
    return a > b ? a : b;
}
int solution(char* binaryA, char* binaryB) {
    int max_length = max(strlen(binaryA), strlen(binaryB));
    binaryA = func_a(binaryA, max_length);
    binaryB = func_a(binaryB, max_length);
    
    int hamming_distance = 0;
    for(int i = 0; i < max_length; i++)
        if(binaryA[i] != binaryB[i])
            hamming_distance += 1;
    return hamming_distance;
}

int main() {
    char* binaryA = "10010";
    char* binaryB = "110";
    int ret = solution(binaryA, binaryB);
    
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
