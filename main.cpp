#include<phonebook.h>

int main(void)
{
    int a=0;
    int choice;
    ListNode startPtr = NULL;
    ListNode item;

    do
    {
        printf("請選擇需要的項目\n\n");
        printf("1.增加通訊錄資料\n\n");
        printf("2.查詢通訊錄資料\n\n");
        printf("3.刪除通訊錄資料\n\n");
        scanf("%d",&choice);
        a=a+1;

        switch(choice)
        {
        case 1:                     /*呼叫新增*/
            addition(ListNode **sPtr,ListNode item);
            break;
        case 2:                     /*呼叫查詢*/
            find(ListNode **sPtr,ListNode item);
            break;

        case 3:                     /*呼叫刪除*/
            del(ListNode **sPtr,ListNode item);
            break;

        default:
            printf("輸入錯誤，請重新輸入\n\n");
        }
    }
    while(a>0);

    return 0;
}

