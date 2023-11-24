// Write a program to find out the max number from given array using function
#include <stdio.h>
int findMax(int arr[], int size) 
{
    int max = arr[0];  

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }

    return max;
}

main() 
{
    int n;

   
    printf("Enter the size of the array: ");
    scanf("%d", &n);

   
    int arr[n];

  
    printf("Enter the elements of the array:\n");
    for (int i = 0; i<n; i++) 
	{
        scanf("%d", &arr[i]);
    }

   
    int max = findMax(arr, n);

   
    printf("The maximum number in the array is: %d\n", max);


}
