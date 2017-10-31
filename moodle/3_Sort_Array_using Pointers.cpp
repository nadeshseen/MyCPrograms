#include<iostream>
#define Rollnum UE163031
char** arr;
int len( char *string)
{
    int i;
    try
        {

            for(i=0; string[i]!='\0'; i++);
        }
    catch(std::exception& e)
        {
            throw e;
        }
    return i;
}
short int compare_( char *s1, char *s2)
{
    if(len(s1)<len(s2))
        {
            for(int i=0; i<len(s1); i++)
                {
                    if(s1[i]<s2[i])
                        {
                            return -1;
                        }
                    if(s1[i]>s2[i])
                        {
                            return 1;
                        }
                }
        }
    else
        {
            for(int i=0; i<len(s2); i++)
                {
                    if(s1[i]<s2[i])
                        {
                            return -1;
                        }
                    if(s1[i]>s2[i])
                        {
                            return 1;
                        }
                }
        }
    return 0;
}
void sort(int num,int length)
{
    for(int k=0; k<num-1; k++)
        for(int i=k+1; i<num; i++)
            {
                if(compare_(*(arr+k),*(arr+i))>0)
                    {
                        char* temp=new char[length];
                        for(int j=0; j<length; j++)
                            {
                                *(temp+j)=*(*(arr+k)+j);
                                *(*(arr+k)+j)=*(*(arr+i)+j);
                                *(*(arr+i)+j)=*(temp+j);
                            }
                        delete[] temp;
                    }
            }
}
int main()
{
    int m=5;
    int n=10;
    arr=new char*[m];
    for(int i=0; i<m; i++)
        *(arr+i)=new char[n]; //Creating 2 D Array
    for(int i=0; i<m; i++)
        {
            std::cin>>*(arr+i);  //Getting Input;
        }

    sort(m,n);

    std::cout<<"\n\n Sorted Array:\n\n";
    for(int i=0; i<m; i++)
        {
            std::cout<<*(arr+i)<<'\n'; //Printing Values
        }
}
