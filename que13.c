//Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?

#include<stdio.h>
main()
{
	int no,apple=5,r;
	printf("Enter the number of students:");
	scanf("%d",&no);
	r=no*apple;
	printf("The number of apples required is %d",r);
}