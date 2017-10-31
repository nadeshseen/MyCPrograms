#include<stdio.h>
#include<iostream>
#include<iomanip>
int main()
{
	int n,s;
	scanf("%d%d",&n,&s);
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		a[i]=i;
	}
	int choices1[s];
	int choices2[s];
	for(int i=0;i<s;i++)
	{
		scanf("%d%d",choices1+s,choices2+s);
	}
	for(int i=0;i<s;i++)
	{int sum=0;
		int j;
		
		for( j=choices1[i];j<=choices2[i];j++)
		{
			sum+=a[j];
			a[j]=0;
			if(a[choices1[i-1]]>0)
			{
				sum+=a[choices1[i-1]];
				a[choices1[i-1]]=0;
			}
			if(a[choices2[i+1]]>=n-1)
			{
				sum+=a[choices1[i+1]];
				a[choices1[i+1]]=0;
			}
			
		}
		printf("%d",sum);
		
		
		
	}
	
}
