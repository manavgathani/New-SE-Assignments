//.Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float f,c;
	printf("Enter farenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Celcius=%f",c);
}
