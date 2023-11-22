//calculate the Factorial of a Given Number using while loop 
#include<stdio.h>
main()
{
	int f=1,num,i=1;
	printf("Enter a number:");
	scanf("%d",&num);
	while(i<=num)
	{
		f=f*i;
		i++;
	}
	printf("%d",f);
}