#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func(int record){
    if(record == 0) return 1; //가위
    else if(record == 1) return 2; //바위
    return 0; //보
}

int solution(int *recordA, int recordA_len, int *recordB, int recordB_len){
    int cnt = 0;
    for(int i = 0; i < recordA_len; i++){
        if(recordA[i] == recordB[i])
            continue;
        else if(recordA[i] == func(recordB[i]))
            cnt = cnt + 3;
        else if(cnt != 0) //원래 그냥 else 였음
            cnt = cnt - 1;
    }
    return cnt;
}

int main() {
    int recordA[10] = {2,0,0,0,0,0,1,1,0,0};
    int recordA_len = 10;
    int recordB[10] = {0,0,0,0,2,2,0,2,2,2};
    int recordB_len = 10;
    int ret = solution(recordA, recordA_len, recordB, recordB_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
