//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
main()
{
	int cp,sp,loss,profit;
	printf("Enter the cost price:");
	scanf("%d",&cp);
	printf("Enter the selling price:");
	scanf("%d",&sp);
	if(cp>sp)
	{
		loss=cp-sp;
		printf("You have done loss of %d",loss);
	}
	else if(sp>cp)
	{
		profit=sp-cp;
		printf("You have done profit of %d",profit);
	}
	else
	{
		printf("There is no loss and no profit");
	}
}