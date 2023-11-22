//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The first three powers is %d %d %d",n,n*n,n*n*n);
}