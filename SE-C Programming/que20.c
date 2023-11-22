//.Convert days into months
#include<stdio.h>
main()
{
	int days,months;
	printf("Enter the days:");
	scanf("%d",&days);
	months=days/30;
	printf("Days into Months is %d",months);
}