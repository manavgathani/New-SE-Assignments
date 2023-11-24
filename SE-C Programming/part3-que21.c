//Accept 3 numbers from user using while loop and check each numbers 
//palindrome

#include <stdio.h>
main() 
{
    int num1, num2, num3;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    
    int originalNum, reversedNum, remainder;

    
    originalNum = num1;
    reversedNum = 0;
    while (num1 > 0) 
	{
        remainder = num1 % 10;
        reversedNum = reversedNum * 10 + remainder;
        num1 /= 10;
    }

    if (originalNum == reversedNum) 
	{
        printf("%d is a palindrome.\n", originalNum);
    } else 
	{
        printf("%d is not a palindrome.\n", originalNum);
    }

    originalNum = num2;
    reversedNum = 0;
    while (num2 > 0) 
	{
        remainder = num2 % 10;
        reversedNum = reversedNum * 10 + remainder;
        num2 /= 10;
    }

    if (originalNum == reversedNum) 
	{
        printf("%d is a palindrome.\n", originalNum);
    } else 
	{
        printf("%d is not a palindrome.\n", originalNum);
    }

    
    originalNum = num3;
    reversedNum = 0;
    while (num3 > 0) 
	{
        remainder = num3 % 10;
        reversedNum = reversedNum * 10 + remainder;
        num3 /= 10;
    }

    if (originalNum == reversedNum) 
	{
        printf("%d is a palindrome.\n", originalNum);
    } else 
	{
        printf("%d is not a palindrome.\n", originalNum);
    }

  
}
