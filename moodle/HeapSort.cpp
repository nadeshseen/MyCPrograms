#include<stdio.h>
int a[]= {82,88,55,787,456,1,1};
int N=7;

void heapify(int n,int i)
{
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<n&&a[l]>a[i])
        {
            largest=l;
        }
    else
        {
            largest=i;
        }

    if(r<n&&a[r]>a[largest])
        {
            largest=r;
        }
    if(largest!=i)
        {
            int temp=a[i];
            a[i]=a[largest];
            a[largest]=temp;
            heapify(n,largest);
        }
}
void heapsort()
{
    for(int i=(N-1)/2; i>=0; i--)
        {
            heapify(N-1,i);
        }
    for(int i=N-1; i>=0; i--)
        {
            int temp=a[0];
            a[0]=a[i];
            a[i]=temp;
            heapify(i,0);
        }
}
int main()
{
    printf("Before Sorting:\n");
    for(int i=0; i<N; i++)
        printf("%d \t",a[i]);
    heapsort();
    printf("\n After Sorting:\n");
    for(int i=0; i<N; i++)
        printf("%d \t",a[i]);

}
