#include<stdio.h>
main()
{
	int i,num,evensum=0,oddsum=0,ocount=0,ecount=0	;
	for(i=1;i<=10;i++)
	{
		printf("Enter a number:");
		scanf("%d",&num);
		if(num%2==0)
		{
			ecount+=1;
			evensum=evensum+i;
		}
		else
		{
			ocount+=1;
			oddsum=oddsum+i;
		}
	}
	printf("Oddcount=%d",ocount);
	printf("\nOddsum=%d",oddsum);
	printf("\nEvencount=%d",ecount);
	printf("\nEvensum=%d",evensum);
}