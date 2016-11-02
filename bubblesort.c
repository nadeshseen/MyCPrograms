#include<stdio.h>
int main()
{
    int a[100],n,temp,i,j;
    printf("Enter number of elements you want to enter in array = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element %d = ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
