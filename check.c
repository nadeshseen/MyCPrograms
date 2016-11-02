#include<stdio.h>
int main()
{
  int s[4][2]={{1,2},{3,4},{5,6},{7,8}};
  printf("s=%p,  s+1 = %p\n",s,s+1);
  printf("s[0]=%p,  s[0]+1 =%p\n",s[0],s[0]+1);



 /* int (*p)[2];
  int i,j,*pint;
  for(i=0;i<=3;i++)
  {
      p=&s[i];
      pint=(int*)p;
      for(j=0;j<=1;j++)
        printf("%d %p\n",*(pint+j),pint+j);
  }
*/  return 0;
}
