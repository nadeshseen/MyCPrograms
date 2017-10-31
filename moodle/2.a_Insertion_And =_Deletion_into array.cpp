#include<iostream>
#define Rollnum UE163031
using namespace std;
int* arr;
int n;
void insert_(int pos,int value)
{
    if(pos>n)
        {
            cout<<"Index out of bounds\n";
            return;
        }
    if(*(arr+pos)==0)
        {
            *(arr+pos)=value;
            return;
        }
    else
        {
            for(int i=n-1; i>=pos; i--)
                {
                    *(arr+i)=*(arr+i-1);

                }
            *(arr+pos)=value;
            return;
        }
}
void delete_(int index)
{
    if(index>=n)
        {
            cout<<"Index out of bounds\n";
            return;
        }
    for(int i=index; i<n-1; i++)
        {
            *(arr+i)=*(arr+i+1);
        }
    *(arr+n-1)=0;
    return;
}
void print()
{
    cout<<'\n';
    for(int i=0; i<n; i++)
        {
            cout<<*(arr+i)<<'\t';
        }

    cout<<'\n';
}
int main()
{
    cout<<"Enter number of elements:\n";
    cin>>n;
    arr=new int[n];
    for(int i=0; i<n; i++)
        *(arr+i)=0;
    char c='y';
    do
        {
            fflush(stdin);
            int ch;
            cout<<"---------------\n1.Insert\t2.Delete\t3.Print\t4.Exit\n----------------\n";
            cin>>ch;
            switch(ch)
                {
                    case 1:
                        fflush(stdin);
                        cout<<"Enter Value\n";
                        int value;
                        cin>>value;

                        cout<<"Enter Index\n";
                        int index;
                        cin>>index;
                        insert_(index,value);
                        break;
                    case 2:
                        cout<<"Enter Index\n";
                        cin>>index;
                        delete_(index);
                        break;
                    case 3:
                        print();
                        break;
                    case 4:
                        return 0;

                }
            cout<<"\nWant to run again?\t";
            cin>>c;

        }
    while(c!='n');

}
