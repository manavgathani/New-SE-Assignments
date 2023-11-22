//Find the Character Is Vowel or Not
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("%c is a vowel",ch);
	}
	else
	{
		printf("%c is consonant",ch);
	}
}