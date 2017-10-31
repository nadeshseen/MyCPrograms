#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *prev;
    struct node *next;
}*head;
void create(struct node *);
void display(struct node *);
int main()
{
    struct node *start,*ins,*I,*I1,*I2;
    int opt,val;
    start=(struct node *)malloc(sizeof(struct node));
    ins=(struct node *)malloc(sizeof(struct node));
    I=(struct node *)malloc(sizeof(struct node));
    head=(struct node *)malloc(sizeof(struct node));
    I1=(struct node *)malloc(sizeof(struct node));
    I2=(struct node *)malloc(sizeof(struct node));
    start->prev=NULL;
    start->next=NULL;
    head=start;
    create(start);
    display(start);
    printf("\n you can do the following : ");
    printf("\n 1. insert a new node ");
    printf("\n 2. delete a node");
    printf("\n enter your choice: ");
    scanf("%d",&opt);
    switch(opt)
        {
            case 1:
                printf("enter the value after which you want to insert a new node: ");
                scanf("%d",&val);
                printf("\n enter value of new node: ");
                scanf("%d",&ins->value);
                I=head;
                while(I->value!=val)
                    {
                        I1=I;
                        I=I1->next;
                        I1=I->next;
                    }
                I1=I->next;
                I->next=ins;
                ins->prev=I;
                ins->next=I1;
                I1->prev=ins;
                display(head);
                break;
            case 2:
                printf("\n Enter value of node you want to delete: ");
                scanf("%d",&val);

                if(head->value==val)
                    {
                        I=head;
                        I1=I->prev;
                        I2=I->next;
                        I2->prev=I1;
                        I1->next=I2;
                        head=I2;
                        display(head);
                    }
                else
                    {
                        I=head;
                        while(I->value!=val)
                            {
                                I1=I;
                                I=I1->next;
                                I2=I->next;
                            }
                        I2->prev=I1;
                        I1->next=I2;
                        display(head);
                    }
                break;
        }
    return 0;
}
void create(struct node *start)
{
    int choice;
    printf("\n Enter value of node: ");
    scanf("%d",&start->value);
    printf("\n want to enter more?(1 for yes,0 for no)");
    scanf("%d",&choice);
    if(choice==0)
        {
            start->next=head;
            head->prev=start;
        }
    else
        {
            struct node *new_node;
            new_node=(struct node *)malloc(sizeof(struct node));
            start->next=new_node;
            new_node->prev=start;
            create(new_node);
        }
}

void display(struct node *start)
{
    while(start->next!=head)
        {
            printf("[%d-]-",start->value);
            start=start->next;
        }
    printf("[%d-]---|",start->value);
}

