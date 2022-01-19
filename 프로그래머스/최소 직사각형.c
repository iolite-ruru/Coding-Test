#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    int* a1 = (int *)malloc(sizeof(int)*sizes_rows);
    int* a2 = (int *)malloc(sizeof(int)*sizes_rows);
    int max1 = 0;
    int max2 = 0;

    for(int i=0; i<sizes_rows; i++){
        a1[i] = sizes[i][0];
        a2[i] = sizes[i][1];
    }
    for(int i=0; i<sizes_rows; i++){
        if(a1[i]>a2[i]){
            int temp = a1[i];
            a1[i] = a2[i];
            a2[i] = temp;
        }
    }
    for(int i=0; i<sizes_rows; i++){
        max1 = (a1[i]>max1)?a1[i]:max1;
        max2 = (a2[i]>max2)?a2[i]:max2;
    }
    answer = max1 * max2;
    return answer;
}
