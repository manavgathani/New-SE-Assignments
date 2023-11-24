// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
main()
{
	int num,sum=0,i;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Series:");
	
	for(i=1;i<=num;i++)
	{
		printf("(%d*%d)",i,i);
		sum+=i * i;
		if(i<num)
		{
			printf(" + ");
		}
	}
	printf("\n%d",sum);
	
}