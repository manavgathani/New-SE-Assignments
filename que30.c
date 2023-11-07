//.WAP to convert years into days

#include<stdio.h>
main()
{
	int year,days;
	printf("Enter no of year:");
	scanf("%d",&year);
	days=year*365;
	printf("Years into Days is %d",days);
}