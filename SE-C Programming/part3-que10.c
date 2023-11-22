//Write a program make a summation of given number
#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{c
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The sum of digits is %d",sum);
}