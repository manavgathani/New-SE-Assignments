#include <stdio.h>
main() 
{
   
    int num,i;
    printf("Enter 5 numbers:\n");
    for (i=1; i<=5; i++) 
	{
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        printf("Entered number %d is: %d\n", i, num);
    }

}
