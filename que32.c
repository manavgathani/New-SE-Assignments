//Accept 2 numbers and find out its sum check it size
#include<stdio.h>
main()
{
	int no1,no2;
	printf("Enter number 1 and number 2:");
	scanf("%d%d",&no1,&no2);
	printf("The sum of two numbers is %d",no1+no2);
	printf("\nThe size of two number is %d %d",sizeof(no1),sizeof(no2));
}