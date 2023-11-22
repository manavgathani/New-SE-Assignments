#include<stdio.h>
main()
{
	int num,i,f=1;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("Factorial=%d",f);s
}