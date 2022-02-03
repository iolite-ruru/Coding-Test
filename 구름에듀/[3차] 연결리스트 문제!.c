#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define INSERT 1
#define REMOVE 2

struct NODE {
    struct NODE* next;
    int data;
};

void insert_node(struct NODE *target, int data){
    struct NODE *new_node = (struct NODE*)malloc(sizeof(struct NODE));
    new_node->next = target->next;
    new_node->data = data;
    target->next = new_node;
}

void remove_node(struct NODE *head, int data){
    struct NODE *curr_node = head;
    while(curr_node->next != NULL){
        if(curr_node->next->data == data){
            struct NODE *temp_node = curr_node->next; //free 하주기 위함
            curr_node->next = curr_node->next->next;
            free(temp_node);
        }
        else
            curr_node = curr_node->next;
    }
}

int solution(int cmd[][2], int cmd_len) {
    struct NODE *head = (struct NODE*)malloc(sizeof(struct NODE));
    head->next = NULL;
    
    for(int i = 0; i < cmd_len; i++){
        if(cmd[i][0] == INSERT)
            insert_node(head, cmd[i][1]);
        else if(cmd[i][0] == REMOVE)
            remove_node(head, cmd[i][1]);
    }
    
    int count = 0;
    struct NODE *curr_node = head -> next;
    while (curr_node != NULL){
        count += 1;
        curr_node = curr_node->next;
    }
    
    return count;
}

int main() {
    int cmd[7][2] = {{1,1},{1,4},{1,2},{1,3},{1,1},{2,2},{2,1}};
    int cmd_len = 7;
    int ret = solution(cmd, cmd_len);
    
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
