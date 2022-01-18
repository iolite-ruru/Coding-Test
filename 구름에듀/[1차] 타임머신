#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long num) {
    long long answer = 0;
		answer = num + 1;
		num += 1;
		int unit = 1;
		while(num > 0){
			if(num%10 == 0){
				answer += unit;
			}
			num/=10;
			unit *= 10;
		}
    return answer;
}

int main() {
    long long num = 9949999;
    long long ret = solution(num);
	
    printf("solution 함수의 반환 값은 %lld 입니다.\n", ret);
}
