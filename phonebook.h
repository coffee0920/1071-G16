#include<stdio.h>
#include<string.h>

struct ListNode
{
    char *name;
    int phonenumber[8];
    char *address;
    ListNode *nextPtr;
};

typedef ListNode *ListNodePtr;

void addition(ListNode **sPtr,ListNode item);
void find(ListNode **sPtr,ListNode item);
void del(ListNode **sPtr,ListNode item);
