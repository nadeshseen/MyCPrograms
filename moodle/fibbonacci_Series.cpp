#include<iostream>
void fibbonacci(int a,int b,int max)
{	if(a>max)
	return;
	std::cout<<a<<' ';
	fibbonacci(b,a+b,max);
}
int main()
{
	int a;
	std::cin>>a;
	std::cout<<"Fibbonacci Series:\n";
	fibbonacci(1,1,a);
	return 0;
}
