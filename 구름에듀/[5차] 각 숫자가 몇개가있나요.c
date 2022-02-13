#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int number) {
    char* answer = "";

    int number_count[10] = { 0, };
    while(number > 0) {
    	number_count[number % 10]++;
    	number /= 10;
    }

    int len = 0;
    for(int i = 0; i < 10; i++)
    	if(number_count[i] != 0)
    		len++;

    answer = (char*) malloc(2 * len * sizeof(char) + 1);
    int index = 0;
    for(int i = 9; i>= 0; i--)
    	if(number_count[i] != 0) {
    		answer[index++] = i + '0';
    		answer[index++] = number_count[i] + '0';
    	}
    answer[index] = '\0';

    return answer;
}

int main() {
	int number1 = 2433;
	char *ret1 = solution(number1);

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

	int number2 = 662244;
	char *ret2 = solution(number2);

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}
