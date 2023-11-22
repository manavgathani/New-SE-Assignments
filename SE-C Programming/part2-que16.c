#include<stdio.h>
main()
{
	int temp;
	printf("Enter a temperature in centigrate:");
	scanf("%d",&temp);
	if(temp<0)
	{
		printf("Freezing Weather");
	}
	else if(temp>=0 && temp<=10)
	{
		printf("Very Cold Weather");
	}
	else if(temp>10 && temp<=20)
	{
		printf("Cold Weather");
	}
	else if(temp>20 && temp<=30)
	{
		printf("Normal Temperature");
	}
	else if(temp>30 && temp<=40)
	{
		printf("Its hot");
	}
	else if(temp>=40)
	{
		printf("Its very hot");
	}
	else
	{
		printf("Invalid temperature");
	}
}