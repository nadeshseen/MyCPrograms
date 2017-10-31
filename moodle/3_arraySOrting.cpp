#include<iostream>
#define Rollnum UE163031
using namespace std;
int main()
{
    int n;
    cout<<"Number of elements\n";
    cin>>n;
    cout<<"Enter elements:\n";
    int* arr=new int[n];
    for(int i=0; i<n; i++)
        {
            cin>>*(arr+i);
        }
    for(int i=0; i<n-1; i++)
        {
            for(int j=i; j<n; j++)
                {
                    if(*(arr+i)>*(arr+j))
                        {
                            *(arr+i)^=*(arr+j);
                            *(arr+j)^=*(arr+i);
                            *(arr+i)^=*(arr+j);
                        }
                }
        }
    cout<<"SORTED ARRAY:\n";
    for(int i=0; i<n; i++)
        {
            cout<<*(arr+i)<<'\n';
        }
}
