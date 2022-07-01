#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

struct Int_Node
{
    int value;
    struct Int_Node *next;
};

struct Int_Node_List
{
    struct Int_Node *node;
    int count;
};

void 
list_push_front(struct Int_Node_List *list, int value)
{
    struct Int_Node *n = (struct Int_Node*)malloc(sizeof(struct Int_Node));
}

int 
main(void)
{
    struct Int_Node_List *list = (struct Int_Node_List*)malloc(sizeof(struct Int_Node_List));
    
    list_push_front(list, 1);
    
    return 0;
}