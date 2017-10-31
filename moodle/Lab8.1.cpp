#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],choice,ins,i;
    int front=0;
    int rear=-1;
    printf("Initially: ");
    for(i=0; i<10; i++)
        {
            a[i]=0;
            printf(" %d |",a[i]);
        }
    do
        {
            printf("\n \n \n  ----------MENU--------- ");
            printf("\n 1. insert an element in the queue");
            printf("\n 2. delete and element");
            printf("\n Enter your choice: ");
            scanf("%d",&choice);
            switch(choice)
                {
                    case 1:
                        rear++;
                        printf("\n Checking for overflow: ");
                        if(rear==10)
                            {
                                printf("\n Overflow");
                            }
                        else
                            {
                                printf("\n NO OVERFLOW \n ");
                                printf("\n enter value of element to be inserted: ");
                                scanf("%d",&ins);
                                a[rear]=ins;
                                for(i=0; i<10; i++)
                                    {
                                        printf(" %d |",a[i]);
                                    }
                            }
                        break;
                    case 2:
                        printf("\n checking for underflow:");
                        if(front>rear)
                            {
                                printf("\n UNDERFLOW");
                            }
                        else
                            {
                                printf("\n NO UNDERFLOW");
                                a[front]=0;
                                front++;
                                for(i=0; i<10; i++)
                                    {
                                        printf(" %d |",a[i]);
                                    }
                            }
                        break;
                }
        }
    while(choice<3);
    return 0;
}

