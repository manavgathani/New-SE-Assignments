//Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
#include<stdio.h>
main()
{
	float p,r,t,ci;
	printf("Enter the value of p,r and t:");
	scanf("%f%f%f",&p,&r,&t);
	ci=(p*(1+r/100)*t);
	printf("The compound interest is %d",ci);
}