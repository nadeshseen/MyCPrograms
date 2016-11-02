#include<stdio.h>
int main()
{
	int num[100];
	i=0;
	while(1)
	{
		scanf("%d",&num[i]);
		if(num[i]==42)
		break;
		i++;
	}
	for(j=0;j<i;i++)
		printf("%d\n",num);
	return 0;
}
