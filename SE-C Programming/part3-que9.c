//Write a program you have to make a summation of first and last Digit. (E.g.,
//1234 Ans: -5)
#include<stdio.h>
main()
{
	int n,r,s,f;
	printf("Enter a number:");
	scanf("%d",&n);
	f=n%10;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
	}
	printf("The sum of first and last digit is %d",f+r);
}