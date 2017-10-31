#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
int top=0;
void display(struct node *);
void push(struct node *);
int main()
{
    struct node *start,*head,*ins;
    int choice;
    start=(struct node*)malloc(sizeof(struct node));
    head=(struct node*)malloc(sizeof(struct node));
    ins=(struct node*)malloc(sizeof(struct node));
    start->next=NULL;
    head=start;
    do
        {
            printf("\n you can do the following: ");
            printf("\n 1. push");
            printf("\n 2. pop");
            printf("\n enter your choice: ");
            scanf("%d",&choice);
            switch(choice)
                {
                    case 1:
                        if(top<=0)
                            {
                                printf("\n enter value: ");
                                scanf("%d",&start->value);
                                top++;
                                display(start);
                            }
                        else
                            {
                                struct node *ins;
                                ins=(struct node *)malloc(sizeof(struct node));
                                printf("\n enter value: ");
                                scanf("%d",&ins->value);
                                ins->next=start;
                                start=ins;
                                top++;
                                display(start);
                            }
                        break;

                    case 2:
                        top--;
                        if(top==-1)
                            {
                                printf("\n Error: Underflow");
                                top++;
                            }
                        else if(top==0)
                            {
                                start->value=NULL;
                            }
                        else
                            {
                                start=start->next;
                                display(start);
                            }
                        break;
                }
        }
    while(choice<3);
    return 0;
}
void display(struct node *start)
{
    while(start->next!=NULL)
        {
            printf("\n [%d]",start->value);
            printf("\n |");
            start=start->next;
        }
    printf("\n [%d]",start->value);
}

