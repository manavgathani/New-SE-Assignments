//WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement 
#include<stdio.h>
main()
{
	int choice;
	printf("press 1 for addition");
	printf("\npress 2 for subtraction");
	printf("\npress 3 for multiplication");
	printf("\npress 4 for division");
	printf("\npress 5 for modulo");
	scanf("%d",&choice);
	if(choice==1)
	{
		int a,b;
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		printf("The addition of two numbers is %d",a+b);
	}
	else if(choice==2)
	{
		int a,b;
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		printf("The subtraction of two numbers is %d",a-b);
	}
	else if(choice==3)
	{
		int a,b;
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		printf("The multiplication of two numbers is %d",a*b);
	}
	else if(choice==4)
	{
		int a,b;
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		printf("The division of two numbers is %d",a/b);
	}
	else if(choice==5)
	{
		int a,b;
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		printf("The modulo of two numbers is %d",a%b);
	}
	else
	{
		printf("Invalid Choice");
	}
}