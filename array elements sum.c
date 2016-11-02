#include<stdio.h>
int main()
{
    int n,a[100],esum=0,osum=0,i;
    printf("Number of elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element %d = ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            esum=esum+a[i];
        else
            osum=osum+a[i];
    }
    printf("Sum of even numbers is %d and odd numbers is %d",esum,osum);
    return 0;
}
