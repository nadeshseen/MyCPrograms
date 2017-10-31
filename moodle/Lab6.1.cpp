#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a[5];
    int n=0,i;
    int choice;
    printf("enter value : ");
    scanf("%d",&a[0]);
    do
        {
            printf("\n YOU CAN DO THE FOLLOWING:");
            printf("\n 1. PUSH");
            printf("\n 2. POP");
            printf("\n 3. EXIT");
            printf("\n \nenter your choice: ");
            scanf("%d",&choice);
            fflush(stdin);
            switch(choice)
                {
                    case 1:
                        if(n>=4)
                            {
                                printf("\n cant perform insertion due to overflow");
                            }
                        else
                            {
                                n=n+1;
                                printf("\n enter value to be inserted: ");
                                scanf("%d",&a[n]);
                                printf("\n After push operation: ");
                                for(i=n; i>=0; i--)
                                    {
                                        printf("\n ___");
                                        printf("\n |%d|",a[i]);
                                    }
                            }
                        getch();
                        system("cls");
                        break;
                    case 2:
                        if(n<0)
                            {
                                printf("\n cant perform POP due to underflow");
                            }
                        else
                            {
                                n=n-1;
                                printf("\n After POP operation : ");
                                for(i=n; i>=0; i--)
                                    {
                                        printf("\n ___");
                                        printf("\n |%d|",a[i]);
                                    }
                            }
                        getch();
                        system("cls");
                        break;
                }
        }
    while(choice<3);
    return 0;
}

