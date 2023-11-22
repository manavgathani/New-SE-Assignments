//Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)
#include<stdio.h>
main()
{
	int n,r,s=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r>s)
		{
			s=r;
			
		}
		n=n/10;
	}
	printf("Largest Number is %d",s);
}
