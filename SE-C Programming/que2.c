//Write a program to make Simple calculator (to make addition, subtraction,
//multiplication, division and modulo)

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("The addition of a and b is %d",a+b);
	printf("\nThe subtraction of a and b is %d",a-b);
	printf("\nThe multiplication of a and b is %d",a*b);
	printf("\nThe division of a and b is %d",a/b);
	printf("\nThe modulo of a and b is %d",a%b);
}