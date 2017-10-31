#include<stdio.h>
#include<conio.h>
#include<string.h>
void evaluate_postfix(char[]);
int pop();
void push(int);
char postfix[20];
char stack[20];
int top=-1;
int main()
{
    int i;
    printf("\n ASSUMPTION: the postfix expression only contains 4 operators i.e. +,-,/,* and ')'bracket at end of it\n ");
    printf("\n Enter postfix expression: ");
    gets(postfix);
    puts(postfix);
    evaluate_postfix(postfix);
    return 0;
}
void evaluate_postfix(char postfix[])
{
    int val;
    int i=0;
    int A,B;
    char ch;
    for(i=0; i!=')'; i++)
        {
            ch=postfix[i];
            if(isdigit(ch))
                {
                    push(ch-'0');
                }
            else if(ch=='*'||ch=='+'||ch=='-'||ch=='/')
                {
                    A=pop();
                    B=pop();
                    switch(ch)
                        {
                            case '*':
                                val=B*A;
                                break;
                            case '+':
                                val=B+A;
                                break;
                            case '-':
                                val=B-A;
                                break;
                            case '/':
                                val=B/A;
                                break;

                        }
                    push(val);
                }
        }
    printf("\n Result of postfix expression: %d",pop());

}
void push(int item)
{
    if(top>=19)
        {
            printf("\n Overflow error\n");
        }
    else
        {
            top++;
            stack[top]=item;
        }

}
int pop()
{
    if(top<0)
        {
            printf("\n Underflow error");
        }
    else
        {
            int item;
            item=stack[top];
            top--;
            return item;
        }
}

