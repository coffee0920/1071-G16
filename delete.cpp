#include"phonebook.h"
int del( ListNodePtr *sPtr, ListNode item )
{
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    ListNodePtr tempPtr;
    if ( item.id == ( *sPtr )->id )
    {
        tempPtr = *sPtr;
        *sPtr = ( *sPtr )->nextPtr;
        free( tempPtr );
        return item.id;
    }
    else
    {
        previousPtr = *sPtr;
        currentPtr = ( *sPtr )->nextPtr;
        while ( currentPtr != NULL && currentPtr->id != item.id )
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if ( currentPtr != NULL )
        {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free( tempPtr );
            return item.id;
        }
    }
    return '\0';
}

int isEmpty( ListNodePtr sPtr )
{
    return sPtr == NULL;
}
