#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Rollnum UE163031
struct node
{
    int value;
    struct node *next;
}*head;
void create(struct node *);
void display(struct node *);
int main()
{
    struct node *start,*ins,*I,*I1;
    int opt,n;
    start=(struct node*)malloc(sizeof(struct node));
    head=(struct node*)malloc(sizeof(struct node));
    ins=(struct node*)malloc(sizeof(struct node));
    I=(struct node*)malloc(sizeof(struct node));
    I1=(struct node*)malloc(sizeof(struct node));
    head=start;
    create(start);
    display(start);
    printf("\n---MENU--------");
    printf("\n 1. insert a new  node ");
    printf("\n 2. delete a new node ");
    printf("\n whats your option? \n ");
    scanf("%d",&opt);
    switch(opt)
        {
            case 1:
                printf("enter value after which you want to insert a new node: ");
                scanf("%d",&n);
                printf("enter value of node: ");
                scanf("%d",&ins->value);
                I=head;
                while(I->value!=n)
                    {
                        I=I->next;
                    }
                ins->next=I->next;
                I->next=ins;
                display(head);
                break;

            case 2:
                printf("enter value of node you want to delete: ");
                scanf("%d",&n);
                I=head;
                while(I->value!=n)
                    {
                        I1=I;
                        I=I1->next;
                    }
                I1->next=I->next;
                display(head);
                break;
        }
    return 0;
}

void create(struct node *start)
{
    int choice;
    printf("\n Enter value: ");
    scanf("%d",&start->value);
    printf("\n Want to enter more? (1 for yes,0 for no)");
    printf("\n Enter your choice: ");
    scanf("%d",&choice);
    if(choice==0)
        {
            start->next=head;
        }
    else
        {
            struct node *new_node;
            new_node=(struct node*)malloc(sizeof(struct node));
            start->next=new_node;
            create(new_node);
        }
}

void display(struct node *start)
{
    printf("|-----");
    printf("");
    while(start->next!=head)
        {
            printf("[%d-]-",start->value);
            start=start->next;
        }
    printf("[-%d-]-----|",start->value);
}

