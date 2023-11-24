// 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
main()
{
	int num,sum=0,i;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Series:");
	
	for(i=1;i<=num;i++)
	{
		printf("%d",i);
		sum+=i;
		if(i<num)
		{
			printf(" + ");
		}
	}
	printf("\n%d",sum);
	
}