#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int one_day_price, int multi_day, int multi_day_price, long long n) {
    if(one_day_price * multi_day <= multi_day_price)
        return n * one_day_price;
    else
        return (n / multi_day) * multi_day_price + (n % multi_day) * one_day_price;
}

int main() {
    int one_day_price1 = 3;
    int multi_day1 = 5;
    int multi_day_price1 = 14;
    long long n1 = 6;
    long long ret1 = solution(one_day_price1, multi_day1, multi_day_price1, n1);

    printf("solution 함수의 반환 값은 %lld 입니다.\n", ret1);

    int one_day_price2 = 2;
    int multi_day2 = 3;
    int multi_day_price2 = 5;
    long long n2 = 11;
    long long ret2 = solution(one_day_price2, multi_day2, multi_day_price2, n2);

    printf("solution 함수의 반환 값은 %lld 입니다.\n", ret2);
}
