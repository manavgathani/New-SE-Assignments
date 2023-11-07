//Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	a=a+b;    
	b=a-b;    
	a=a-b;
	printf("After swapping the value of a=%d and b=%d",a,b);
}