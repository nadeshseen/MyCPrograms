#include<stdio.h>
int main()
{
    int n,count=0,i,a[100],k;
    scanf("%d %d",&n,&k);
    i=0;
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%k==0)
            count++;
    }
    printf("%d",count);
    return 0;
}
