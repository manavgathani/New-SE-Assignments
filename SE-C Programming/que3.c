//WAP to Find Area And Circumference of Circle

#include<stdio.h>
main()
{
	float radius,a,c;
	printf("Enter the radius of a circle:");
	scanf("%f",&radius);
	a=3.14*radius*radius;
	c=2*3.14*radius;
	printf("The area of circle is %f",a);
	printf("\nThe circumferene of circle is %f",c);
}