//  C Program to Check Uppercase or Lowercase or Digit or Special 
//Character
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("%c is in uppercase",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("%c is in lowercase",ch);
	}
	else
	{
		printf("%c is special digit",ch);
	}
}