#include<stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=1,b=3;
    swap(a,b);
    printf("%d %d",a,b);
    return 0;
}
