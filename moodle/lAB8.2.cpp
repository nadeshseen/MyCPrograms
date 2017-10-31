#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],choice,ins,i;
    int front=-1;
    int rear=-1;
    for(i=0; i<5; i++)
        {
            a[i]=0;
            printf(" %d |",a[i]);
        }
    do
        {
            printf("\n ----MENU---- \n");
            printf("\n 1. enqueue");
            printf("\n 2. dequeue");
            printf("\n 3. EXIT");
            printf("\n \n enter your choice: ");
            scanf("%d",&choice);
            switch(choice)
                {
                    case 1:
                        rear++;
                        if((front==0&&rear==5))
                            {
                                printf("\n OVERFLOW ERROR \n ");
                            }
                        else if(rear==front)
                            {
                                printf("\n OVERFLOW ERROR \n ");
                                rear=rear-1;
                            }
                        else if((front!=0)&&(rear==5))
                            {
                                rear=0;
                                printf("\n enter value of element: ");
                                scanf("%d",&ins);
                                a[rear]=ins;
                            }
                        else if((front==-1)&&(rear==0))
                            {
                                front=0;
                                printf("\n enter value of element: ");
                                scanf("%d",&ins);
                                a[rear]=ins;
                            }
                        else
                            {
                                printf("\n enter value of element: ");
                                scanf("%d",&ins);
                                a[rear]=ins;
                            }
                        for(i=0; i<5; i++)
                            {
                                printf(" %d |",a[i]);
                            }
                        break;

                    case 2:
                        if((front==-1)&&(rear==-1))
                            {
                                printf("\n UNDERFLOW ERROR \n \n");
                            }
                        else if((a[rear]==0)&&(front>rear))
                            {
                                front=front-1;
                                printf("\n UNDERFLOW ERROR \n \n ");
                            }
                        else if(rear==5&&front==5)
                            {
                                printf("\n Underflow error\n");
                                front=-1;
                                rear=-1;
                            }
                        else if(rear!=-1&&front==5)
                            {
                                front=0;
                                a[front]=0;
                                front++;
                            }
                        else if(front==rear&&front<5)
                            {
                                a[front]=0;
                                front=-1;
                                rear=-1;

                            }
                        else
                            {
                                a[front]=0;
                                front++;

                            }
                        for(i=0; i<5; i++)
                            {
                                printf(" %d |",a[i]);
                            }
                }
        }
    while(choice<3);

    return 0;
}

