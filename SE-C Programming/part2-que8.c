#include<stdio.h>
main()
{
	float height;
	printf("Enter the height of a person:");
	scanf("%f",&height);
	if(height>=170)
	{
		printf("You are taller");
	}
	else
	{
		printf("You are shorter");
	}
}