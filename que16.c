//Convert country’s name in abbreviate form


#include<stdio.h>
main()
{
	char fname[20],lname[20];
	printf("Enter full country name:");
	scanf("%s%s",fname,lname);
	printf("Abbreviated form:");
	printf("%c. %c.",fname[0],lname[0]);
}
