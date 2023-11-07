//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
main()
{
	int e1,e2,e3,e4,e5,total,avg;
	printf("Enter the salary of 5 employees:");
	scanf("%d%d%d%d%d",&e1,&e2,&e3,&e4,&e5);
	total=e1+e2+e3+e4+e5;
	avg=total/5;
	printf("Total salary is %d",total);
	printf("\nAverage salary is %d",avg);
}