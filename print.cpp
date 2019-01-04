#include"phonebook.h"
void instructions( void )
{
    printf( "|-----------------------------------------------|\n"
            "|Phonebook Menu:                                |\n"
            "|Enter                                          |\n"
            "|   1 to insert an contact into the phonebook.  |\n"
            "|   2 to delete an contact from the phonebook.  |\n"
            "|   3 to show phonebook.                        |\n"
            "|   4 to end.                                   |\n"
            "|Enter your choice:                             |\n"
            "|-----------------------------------------------|\n");
}

void printList( ListNodePtr currentPtr )
{
    if ( currentPtr == NULL )
    {
        printf( "The phonebook is empty.\n\n" );
    }
    else
    {
        printf( "The phonebook is:\n\n" );

        while ( currentPtr != NULL )
        {
            printf("ID: %d\n",currentPtr->id);
            printf("Name: ");
            printf("%s\n",currentPtr->name);
            printf("Phone number: 0%9d\n",currentPtr->num);
            currentPtr = currentPtr->nextPtr;
        }
        printf( "\nThe end of the phonebook.\n");
        printf("Return to the menu.\n");
    }
}
