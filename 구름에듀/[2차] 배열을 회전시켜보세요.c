#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_NUMBER 1001

int* func_a(int arr[], int arr_len){
    int* ret = (int*)malloc(sizeof(int)*(2*arr_len));
    for(int i = 0; i < arr_len; i++)
        ret[i + arr_len] = ret[i] = arr[i];
    return ret;
}

bool func_b(int first[], int second[], int length){
    int counter[MAX_NUMBER] = {0};
    for(int i = 0; i < length; i++){
        counter[first[i]]++;
        counter[second[i]]--;
    }
    for(int i = 0; i < MAX_NUMBER; i++)
        if(counter[i] != 0)
            return false;
    return true;
}

bool func_c(int first[], int second[], int length){
    for(int i = 0; i < length; i++){
        int j;
        for(j = 0; j < length; j++)
            if(first[i + j] != second[j])
                break;
        if(j == length)
            return true;
    }
    return false;
}
