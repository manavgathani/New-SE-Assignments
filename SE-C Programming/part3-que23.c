//C Program to Reverse a Number Using FOR Loop
#include <stdio.h>
main() 
{
    int num, reversedNum = 0, remainder;


    printf("Enter an integer: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10)
	{
    	
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    printf("Reversed number: %d\n", reversedNum);

  
}

