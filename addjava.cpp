#include <stdio.h>
#include <stdlib.h>
#define MAX 2

struct list
{
    char name[10];
    char phone[11];
    char gender[7];

    char address[80];
    int yeah;
};
typedef struct list M;

void input( M m[] )
{
    int i;
    for( i = 0; i < MAX; i++ )
    {
        printf("Enter number %d data\n", i + 1 );
        puts("Name:");
        gets( m[i].name );
        puts("Phone:");
        gets( m[i].phone );
        puts("Gender:");
        gets(m[i].gender);
        puts("Address:");
        gets( m[i].address );

    }
}
void sort_a( M m[] )
{
    int i, j, a;
    M t;
    for( i = 0; i < MAX; i++ )
    {
        a = i;
        for( j = i + 1; j < MAX; j++ )
        {
            if( m[i].yeah < m[j].yeah )
            {
                a = j;
            }
        }
        if( a == i )
            continue;
        t=m[i];
        m[i]=m[a];
        m[a]=t;
    }
}

void screen( M m[] )
{
    int i;
    printf("Name\t     Phone\t     Gender\t     Address\n");
    for( i = 0; i < MAX; i++ )
        printf("%s\t %s\t %s\t %s\t \n", m[i].name, m[i].phone,m[i].gender, m[i].address );
}
int main()
{
    M m[MAX];
    input(m);
    sort_a(m);
    screen(m);
    system("pause");
    return 0;
}
