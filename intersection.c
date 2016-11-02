#include<stdio.h>
int main()
{
    int A[10],B[10],i,j,n1,n2;
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
    printf("(A intersection B) = ");
    for(i=0;i<n1;i++)
        for(j=0;j<n2;j++)
            if(A[i]==B[j])
                printf("%d ",A[i]);



    return 0;
}
