//.Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>
main() 
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = 1;

    while (i <= n) 
	{
        sum += i;
        i++;
    }

    printf("Sum = %d", sum);

}
