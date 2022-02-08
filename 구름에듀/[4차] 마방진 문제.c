#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int first;
    int second;
} Pair;

const int n = 4;

int* func_a(int matrix[][4]) {
    int* ret = (int*)malloc(sizeof(int)*(2));
    int idx = 0;
    bool exist[17] = {false};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
                exist[matrix[i][j]] = true;
    for (int i = 1; i <= n * n; i++)
        if (exist[i] == false)
            ret[idx++] = i;
    return ret;
}

Pair* func_b(int matrix[][4]) {
    Pair* ret = (Pair*)malloc(sizeof(Pair)*(2));
    int idx = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == 0) {
                ret[idx].first = i;
                ret[idx++].second = j;
            }
    return ret;
}

bool func_c(int matrix[][4]) {
    int sum = 0;
    for (int i = 1; i <= n * n; i++)
        sum += i;
    sum = sum / n;
    for (int i = 0; i < n; i++) {
        int row_sum = 0;
        int col_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += matrix[i][j];
            col_sum += matrix[j][i];
        }
        if (row_sum != sum || col_sum != sum)
            return false;
    }
    int main_diagonal_sum = 0;
    int skew_diagonal_sum = 0;
    for (int i = 0; i < n; i++) {
        main_diagonal_sum += matrix[i][i];
        skew_diagonal_sum += matrix[i][n-1-i];
    }
    if (main_diagonal_sum != sum || skew_diagonal_sum != sum)
        return false;
    return true;
}
int* solution(int matrix[][4]) {
    int* answer = (int*)malloc(sizeof(int) * 6);
    int ans_idx = 0;
    Pair* coords = func_b(matrix); //빈칸 위치 찾음
    int* nums = func_a(matrix); //존재하지 않는 숫자 2개를 찾음

    //일단 순서대로 대입함
    matrix[coords[0].first][coords[0].second] = nums[0];
    matrix[coords[1].first][coords[1].second] = nums[1];
	
    if (func_c(matrix)) { //'첫 번째 빈칸:작은숫자, 두 번째 빈칸:큰 숫자'가 맞는지 확인
        for (int i = 0; i <= 1; i++) {
            answer[ans_idx++] = coords[i].first + 1; //인덱스가 아닌 열or행 번호를 리턴하기 위해서 +1 해줌
            answer[ans_idx++] = coords[i].second + 1;
            answer[ans_idx++] = nums[i];
        }
    }
    else { //아니라면 순서를 바꾼 다음에 위와 동일한 작업 진행...
        matrix[coords[0].first][coords[0].second] = nums[1];
        matrix[coords[1].first][coords[1].second] = nums[0];
        for (int i = 0; i <= 1; i++) {
            answer[ans_idx++] = coords[1-i].first + 1;
            answer[ans_idx++] = coords[1-i].second + 1;
            answer[ans_idx++] = nums[i];
        }
    }
    return answer;
}

int main() {
    int matrix[4][4] = {{16,2,3,13},{5,11,10,0},{9,7,6,12},{0,14,15,1}};
    int* ret = solution(matrix);
    
    printf("solution 함수의 반환 값은 {");
    for (int i = 0; i < 6; i++) {
        if (i != 0) printf(",");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}
