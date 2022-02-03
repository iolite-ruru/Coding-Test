#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int revenue[], int revenue_len, int k) {
    int answer = 0;
    int sum = 0;
    for (int i = 0; i < k; i++) { //0 ~ k-2이 합계 계산 영역이 됨
        sum += revenue[i];
    }
    answer = sum;
    for (int i = k; i < revenue_len; i++) { //합계 계산 영역을 한 칸씩 오른쪽으로 이동하고 있음
        sum = sum - revenue[i - k] + revenue[i];
        if (answer < sum)
            answer = sum;
    }
    return answer;
}

int main() {
    int revenue1[8] = {1, 1, 9, 3, 7, 6, 5, 10};
    int revenue_len1 = 8;
    int k1 = 4;
    int ret1 = solution(revenue1, revenue_len1, k1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int revenue2[5] = {1, 1, 5, 1, 1};
    int revenue_len2 = 5;
    int k2 = 1;
    int ret2 = solution(revenue2, revenue_len2, k2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
