#include<stdio.h>
main()
{
	int n,r,t;
	printf("Enter a number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	


}