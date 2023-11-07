//Find area of Rectangle Formula : A=wl
#include<stdio.h>
main()
{
	int width,length,area;
	printf("Enter the length of rectangle:");
	scanf("%d",&length);
	printf("Enter the width of rectangle:");
	scanf("%d",&width);
	area=length*width;
	printf("The area of rectangle is %d",area);
}