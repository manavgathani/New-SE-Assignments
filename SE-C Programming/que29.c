//.Convert minutes into seconds and hours
#include<stdio.h>
main()
{
	float min,sec,hour;
	printf("Enter the minutes:");
	scanf("%f",&min);
	hour=min/60;
	sec=min*60;
	printf("minute into hour is %f",hour);
	printf("\nminute into seconds is %f",sec);
}