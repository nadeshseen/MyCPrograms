#include<iostream>
#define Rollnum UE163031
int len(char* string)
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
char* is_equal(char *string1,char* string2)
{
    if(len(string1)!=len(string2))
        return "NO";
    for(int i=0; string1[i]!='\0'; i++)
        {
            if(string2[i]^string1[i])
                {
                    return "NO";
                }
        }
    return "YES";
}
char* concatenate(char *source,char *source2)
{
    char* new_string;
    int i;
    try
        {
            new_string=new char[len(source)+len(source2)];

        }
    catch(std::exception& m)
        {
            throw m;
        }
    for(i=0; i<len(source); i++)
        {
            *(new_string+i)=*(source+i);
        }
    for(; i<len(source2)+len(source); i++)
        {
            *(new_string+i)=source2[i-len(source)];
        }
    new_string[i]='\0';
    return new_string;
}
void copy_(char* &target,char *source)
{
    target=source;
    return;
}
char* is_palindrome(char *string)
{
    for(int i=0; i<len(string)/2; i++)
        {
            if(string[i]^string[len(string)-i-1])
                {
                    return "NO";
                }

        }
    return "YES";
}
int main()
{
	char *String1="SWALA";
	char *String2="ALAWS";
	std::cout<<"Before Concatenation:\t"<<String1<<'\t'<<String2<<'\n';
	std::cout<<"Is String1 Palindrome? :\t"<<is_palindrome(String1)<<'\n';
	std::cout<<"Are Both Strings Are Equal? : \t"<<is_equal(String1,String2)<<'\n';
	String1=concatenate(String1,String2);
	std::cout<<"After Concatenation:\t"<<String1<<'\n';
	std::cout<<"Now Is String1 Palindrome? :\t"<<is_palindrome(String1)<<'\n';
	std::cout<<"Is String2 Palindrome? :\t"<<is_palindrome(String2)<<'\n';
	std::cout<<"Copying String1 to String2. \n";
	copy_(String2,String1);
	std::cout<<"Now Is String2 Palindrome? :\t"<<is_palindrome(String2)<<'\n';
	std::cout<<"Are Both Strings Are Equal? : \t"<<is_equal(String1,String2)<<'\n';
	std::cout<<"At Last:\t"<<String1<<'\t'<<String2<<'\n';
	return 0;
}
