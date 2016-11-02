#include<stdio.h>
int main()
{
  int a[100];
  int i=0,j=0,n;
  n=0;
  while(j!=1)
  {
      scanf("%d",&a[i]);
      n++;
      if(a[i]==42)
        j=1;
        else
            {
                i++;
  }
  }
  for(i=0;i<n-1;i++)
    printf("%d\n",a[i]);

}
