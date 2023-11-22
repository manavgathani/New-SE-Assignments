//Accept 5 expense from user and find average of expense
#include<stdio.h>
main()
{
	int e1,e2,e3,e4,e5,total,avg;
	printf("Enter the expense of 5 employees:");
	scanf("%d%d%d%d%d",&e1,&e2,&e3,&e4,&e5);
	total=e1+e2+e3+e4+e5;
	avg=total/5;
	printf("Total expense is %d",total);
	printf("\nAverage expense is %d",avg);
}