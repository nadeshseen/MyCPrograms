#include<iostream>
#define Rollnum UE163031
using namespace std;
int main()
{
    bool FOUND=false;
    int* arr;
    int n,i;
    cout<<"Enter Number of Elements:\n";
    cin>>n;
    arr=new int[n];
    cout<<"Enter all Elements:\n";
    for( i=0; i<n; i++)
        {
            cin>>*(arr+i);

        }
    int k;
    cout<<"Enter Number to find:\n";
    cin>>k;
    for(i=0; i<n; i++)
        {
            if(!(k^*(arr+i)))
                {
                    cout<<"Item found At Index: "<<i<<'\n';
                    FOUND=true;
                }
        }
    if(!FOUND)
        {
            cout<<"Item not found";
        }


}
