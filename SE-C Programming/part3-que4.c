#include<stdio.h>
main()
{
	int i,num;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
}