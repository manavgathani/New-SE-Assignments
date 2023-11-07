//Convert years into days and months
#include<stdio.h>
main()
{
	int years,days,months;
	printf("Enter no of year:");
	scanf("%d",&years);
	days=years*365;
	months=years*12;
	printf("The number of days is %d",days);
	printf("\nThe number of months is %d",months);
	
}