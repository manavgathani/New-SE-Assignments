//.Write a C program to check whether a triangle can be formed with the given 
values for the angles.
#include <stdio.h>  
main()  
{  
    int anglea, angleb, anglec, sum; 

    printf("Input three angles of triangle : ");  
    scanf("%d %d %d", &anglea, &angleb, &anglec); 
    
    sum = anglea + angleb + anglec;   

  
    if(sum == 180)   
    {  
        printf("The triangle is valid.\n");  
    }  
    else  
    {  
        printf("The triangle is not valid.\n");  
    }  
 } 