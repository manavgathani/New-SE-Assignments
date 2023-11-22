//Accept marks from user and check pass or fail
#include<stdio.h>
main()
{
	int marks;
	printf("Enter a marks:");
	scanf("%d",&marks);
	if(marks>=35)
	{
		printf("You are passed");
	}
	else
	{
		printf("You are fail");
	}
}