//WAP to find number is even or odd using ternary operator
#include<stdio.h>
main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	(num%2==0) ? printf("The number is even") : printf("The number is odd");
}