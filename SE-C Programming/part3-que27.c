//1 2 3 6 9 18 27 54...
#include <stdio.h>
main() 
{
    int num;

 
    printf("Enter the number of terms in the series: ");
    scanf("%d", &num);

    int term = 1;

 
    printf("Series: ");
    for (int i = 1; i <= num; i++) {
        printf("%d ", term);
        term *= 3;
    }

    printf("\n");


}
