#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int primes[168];
    int prime_len = 0;
    primes[prime_len++] = 2;
    for (int i = 3; i <= n; i += 2) {
        bool is_prime = true;
        for (int j = 2; j < i; j++)
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        if (is_prime)
            primes[prime_len++] = i;
    }
    
    for (int i = 0; i < prime_len - 2; i++)
        for (int j = i + 1; j < prime_len - 1; j++)
            for (int k = j + 1; k < prime_len; k++) 
                if (primes[i] + primes[j] + primes[k] == n)
                    answer++;
    return answer;
}

int main() {
    int n1 = 33;
    int ret1 = solution(n1);
    
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int n2 = 9;
    int ret2 = solution(n2);
    
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
