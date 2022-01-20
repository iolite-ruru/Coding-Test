#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Student{
    int student_number;
    int rank;
}Student;


int compare(const void *a, const void * b){
    Student first = *(Student *)a;
    Student second = *(Student *)b;
    if(first.rank< second.rank)
        return -1;
    else if(first.rank > second.rank)
        return 1;
    else
        return 0;
}

int* solution(int student_numbers[], int student_numbers_len, int ranks[], int ranks_len) {
    int len = student_numbers_len;
    Student* students = (Student*)malloc(sizeof(Student)*len);
    for(int i = 0; i < len; ++i){
        students[i].student_number = student_numbers[i];
        students[i].rank = ranks[i];
    }
    
    qsort(students, len, sizeof(Student), compare);
    
    int* answer = (int*)malloc(sizeof(int)*len);
    for(int i = 0; i < len; ++i)
        answer[i] = students[i].student_number;
    
    return answer;
}

int main() {
    int student_numbers[5] = {2,4,3,6,5};
    int student_numbers_len = 5;
    int ranks[5] = {3,5,1,2,4};
    int ranks_len = 5;
    int* ret = solution(student_numbers, student_numbers_len, ranks, ranks_len);
       
    printf("solution 함수의 반환 값은 [");
    for(int i = 0; i < 5; i++){
        if (i != 0) printf(",");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}
