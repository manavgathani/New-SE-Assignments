//Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
main()
{
	float breadth,height,area;
	printf("Enter the breadth of triangle:");
	scanf("%f",&breadth);
	printf("Enter the height of triangle:");
	scanf("%f",&height);
	area=(breadth*height)/2;
	printf("The area of triangle is %f",area);
}