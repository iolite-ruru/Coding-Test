#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int k) {
	int *answer = malloc(sizeof(int)*100);
	int count = 0;
	for (int i = 1; i <= k; i++) {
		long long square_num = (long long)i * i;
		long long divisor = 1;
		while (square_num / divisor != 0) {
			long long front = square_num / divisor;
			long long back = square_num % divisor;
			divisor *= 10;
			if (back != 0 && front != 0)
				if (front + back == i) {
					answer[count] = i;
					count++;
				}
		}
	}
	return answer;
}

int main() {
    int k = 500;
    int* ret = solution(k);

    printf("solution 함수의 반환 값은 {");
    for(int i = 0; i < 5; i++){
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}
