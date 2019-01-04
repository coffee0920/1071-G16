#include"phonebook.h"
int main( void )
{
    ListNodePtr startPtr = NULL;
    int choice;
    ListNode item;
    char *s;
    instructions();
    printf( " oh? ");
    scanf( "%d", &choice );
    printf("");
    while ( choice != 4 )
    {
        s = (char *)malloc(sizeof(char)*80);
        switch ( choice )
        {
        case 1:
            printf( "Enter a id: " );
            scanf( "%d", &item );
            printf("Enter name: ");
            getchar();
            gets(s);
            strcpy(item.name,s);
            printf("Enter the phonenumber: ");
            scanf("%d",&item.num);
            insert( &startPtr, item );
            printf("Insert a contact successfully, return to menu.\n");
            break;
        case 2:
            if ( !isEmpty( startPtr ) )
            {
                printf( "Enter id to be deleted: " );
                scanf( "\n%d", &item );
                if ( del( &startPtr, item ) )
                {
                    printf( "%d deleted.\n", item.id );
                    printList( startPtr );
                    printf("Return to the menu.\n");
                }
                else
                {
                    printf( "%d not found.\n"
                            "Return to the menu.\n", item.id);
                }
            }
            else
            {
                printf( "The phonebook is empty.\n"
                        "Return to the menu.\n" );
            }
            break;
        case 3:
            printList( startPtr );
            break;
        case 4:
            break;
        default:
            printf( "Invalid choice.\n"
                    "Return to the menu.\n" );
            instructions();
            break;
        }
        instructions();
        printf( " oh? " );
        scanf( "%d", &choice );
    }
    printf( "End of run.\n" );
    return 0;
}

