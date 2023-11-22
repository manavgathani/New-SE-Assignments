#include<stdio.h>
main()
{
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
	{
		printf("Both Numbers are equal");
	}
	else
	{
		printf("Both Numbers are not equal");
	}
}