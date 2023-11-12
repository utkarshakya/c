#include <stdio.h>

typedef struct listNode{
    int data;
    struct listNode *next;
} listNode;

int main(){
    listNode l1;
    l1.next = NULL;
    listNode l2 = {21,NULL};
    l1.next = &l2;
    printf("%p\n",l1.next);
    printf("%p", l2.next);
    return 0;
}