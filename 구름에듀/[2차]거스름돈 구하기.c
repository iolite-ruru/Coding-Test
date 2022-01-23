#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int money) {
    int coin[8] = {10, 50, 100, 500, 1000, 5000, 10000, 50000};
    int counter = 0;
    int idx = 7;
    while (money > 0){
        counter += money/coin[idx];
        money %= coin[idx];
        idx -= 1;
    }
    return counter;
}

int main() {
    int money = 2760;
    int ret = solution(money);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
