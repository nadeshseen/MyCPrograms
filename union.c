#include<stdio.h>
int main()
{
    int A[10],B[10],n1,n2,i,j;
    printf("Number elements in A and B :\n");
    scanf("%d%d",&n1,&n2);
    printf("Enter elements in set A :\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter elements in set B :\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&B[i]);
    }
    printf("(A U B) = ");
    i=j=0;
    while(i<n1&&j<n2)
      {
          if(A[i]<B[j])
            printf("%d ",A[i++]);
          else if(A[i]>B[j])
            printf("%d ",B[j++]);
          else
          {
              printf("%d ",B[j++]);
              i++;
          }
      }
    while(i<n1)
        printf("%d ",A[i++]);
    while(j<n2)
        printf("%d ",B[j++]);

/*    for(i=0;i<n1;i++)
        printf("%d_",A[i]);
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(B[i]==A[j])
                break;

        }
    }
    if(j==n1+1)
        printf("%d ",B[i]);*/
    return 0;
}
