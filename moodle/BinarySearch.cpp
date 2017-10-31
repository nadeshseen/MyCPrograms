#include<iostream>
#define Rollnum UE163031
using namespace std;
int binarysearch(int *arr,int left,int right,int element)
{
    if(left<=right)
        {
            int mid=(left+right)/2;
            if(element==*(arr+mid))
                {
                    return mid;
                }
            else if(element<*(arr+mid))
                binarysearch(arr,left,mid-1,element);
            else if(element>*(arr+mid))
                binarysearch(arr,mid+1,right,element);
        }
    else
        return -1;
}
int main()
{
    int *arr,n,element;
    cout<<"Enter number of Elements:\n";
    cin>>n;
    arr=new int[n];
    cout<<"Enter Sorted List of Elements:\n";
    for(int i=0; i<n; i++)
        {
            cin>>*(arr+i);
        }
    cin>>element;
    int result=binarysearch(arr,0,n,element);
    if(result>-1)
        {
            cout<<"Element found at Index: "<<result<<'\n';
        }
    else
        {
            cout<<"Element Not Found\n";
        }
}
