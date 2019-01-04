#include"phonebook.h"
void insert( ListNode **sPtr, ListNode item )
{
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    newPtr = (ListNode *) malloc( sizeof( ListNode ) );
    char *s;
    s = (char *)malloc(sizeof(char)*80);
    if ( newPtr != NULL )
    {
        newPtr->id = item.id;
        strcpy(s,item.name);
        newPtr->name = s;
        newPtr->num = item.num;
        newPtr->nextPtr = NULL;
        previousPtr = NULL;
        currentPtr = *sPtr;
        while ( currentPtr != NULL && item.id > currentPtr->id )
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if ( previousPtr == NULL )
        {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else
    {
        printf( "%d not inserted. No memory available.\n", item.id );
    }
}
