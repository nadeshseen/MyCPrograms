#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *prev;
    struct node *next;
};
void create(struct node *);
void display(struct node *);
int main()
{
    struct node *start;
    struct node *head,*ins,*I,*I1;
    int ch,val;
    head=(struct node*)malloc(sizeof(struct node));
    start=(struct node*)malloc(sizeof(struct node));
    ins=(struct node*)malloc(sizeof(struct node));
    I=(struct node*)malloc(sizeof(struct node));
    I1=(struct node*)malloc(sizeof(struct node));
    start->prev=NULL;
    start->next=NULL;
    head=start;
    create(start);
    display(start);
    printf("\n You can perform the following operations: \n 1. insert a new node at beginning\n 2. Insert a new node at end\n 3. Insert a new node after some value\n 4. Delete the first node\n 5. Delete the last node\n 6. Delete a particular node\n \n choose your option: ");
    scanf("%d",&ch);
    switch(ch)
        {
            case 1:
                printf("\n Enter value of node: ");
                scanf("%d",&ins->value);
                ins->prev=NULL;
                head->prev=ins;
                ins->next=head;
                head=ins;
                display(head);
                break;
            case 2:
                printf("\n Enter value of node: ");
                scanf("%d",&ins->value);
                I=head;
                while(I->next!=NULL)
                    {
                        I=I->next;
                    }
                I->next=ins;
                ins->prev=I;
                ins->next=NULL;
                display(head);
                break;
            case 3:
                printf("\n Enter value after which you want to insert: ");
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
                I->next=ins;
                ins->prev=I;
                I1->prev=ins;
                ins->next=I1;
                display(head);
                break;
            case 4:
                head=head->next;
                head->prev=NULL;
                display(head);
                break;
            case 5:
                I=head;
                while(I->next!=NULL)
                    {
                        I1=I;
                        I=I1->next;
                    }
                I1->next=NULL;
                display(head);
                break;
            case 6:
                printf("enter value you want to delete: ");
                scanf("%d",&val);
                I=head;
                while(I->value!=val)
                    {
                        I=I->next;
                    }
                I1=I->prev;
                I1->next=I->next;
                I1=I->next;
                I1->prev=I->prev;
                display(head);
                break;
        }
    return 0;
}
void create(struct node *start)
{
    int choice;
    struct node *new_node;
    printf("enter value: ");
    scanf("%d",&start->value);
    printf("\n Do you want to add more? (1 for yes, 0 for no) ");
    scanf("%d",&choice);
    if(choice==0)
        {
            start->next=NULL;
        }
    else
        {
            new_node=(struct node *)malloc(sizeof(struct node));
            start->next=new_node;
            new_node->prev=start;
            create(new_node);
        }
}
void display(struct node *start)
{
    printf("\n \n \n NULL-");
    while(start->next!=NULL)
        {
            printf("[-%d-]",start->value);
            start=start->next;
        }
    printf("[-%d-]",start->value);
    printf("-NULL");
}

