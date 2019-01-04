#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct ListNode
{
    int id;
    char *name;
    int num;
    ListNode *nextPtr;
};

typedef ListNode *ListNodePtr;

void insert( ListNodePtr *sPtr, ListNode item );
int del( ListNodePtr *sPtr, ListNode item );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void instructions( void );
