#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* commands) {
    int* answer;
		answer = (int *)malloc(sizeof(int)*2);
		for(int i=0; i<2; i++){
			answer[i] = 0;
		}
	  for(int i=0; i<strlen(commands); i++){
			char ch = commands[i];
			switch(ch){
				case 'L': answer[0]--; break;
				case 'R': answer[0]++; break;
				case 'U': answer[1]++; break;
				case 'D': answer[1]--; break;
			}
		}
    return answer;
}

int main() {
    char* commands = "URDDL";
    int* ret = solution(commands);

    printf("solution 함수의 반환 값은 [");
    for(int i = 0; i < 2; i++){
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}
