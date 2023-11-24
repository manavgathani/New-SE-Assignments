//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

main() 
{
    int num, sum = 0;

   
    printf("Enter the value of n: ");
    scanf("%d", &num);


    printf("Series: ");
    for (int i=1; i<=num;i++) 
	{
      
        sum += i;
		printf("(");
        for (int j = 1; j <= i; ++j) 
		{
            printf("%d", j);


            if (j<i) 
			{
                printf("+");
            }
        }
        printf(")");

        if (i<num) 
		{
            printf(" + ");
        }
    }
    printf("\nSum of the series is: %d\n", sum);

   
}
