//WAP to calculate swap 2 numbers with using of multiplication and division
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("After swapping the value of a=%d and b=%d",a,b);
}