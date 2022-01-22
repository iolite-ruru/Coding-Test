#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(char* times){
    char first_num[10] = {0};
    char second_num[10] = {0};
    strncpy(first_num, times, 2);
    strncpy(second_num, times+3,3);
    int hour = atoi(first_num);
    int minute = atoi(second_num);
    return hour*60 + minute;
}

int solution(char* subway_times[], int subway_times_len, char* current_time) {
    int current_minute = func_a(current_time);
    int INF = 1000000000;
    int answer = INF;
    for(int i = 0; i < subway_times_len; ++i){
        int subway_minute = func_a(subway_times[i]);
        if(subway_minute >= current_minute){
            answer = subway_minute - current_minute;
            break;
        }
    }
    if(answer == INF)
        return -1;
    return answer;
}

int main() {
    char* subway_times1[4] = {"05:31", "11:59", "13:30", "23:32"};
    int subway_times_len1 = 4;
    char* current_time1 = "12:00";
    int ret1 = solution(subway_times1, subway_times_len1, current_time1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    char* subway_times2[4] = {"14:31", "15:31"};
    int subway_times_len2 = 2;
    char* current_time2 = "15:31";
    int ret2 = solution(subway_times2, subway_times_len2, current_time2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
