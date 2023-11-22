#include<stdio.h>
main()
{
	int num,i,ft=0,st=1,tt;
	printf("Enter a number upto which you have to find the series:");
	scanf("%d",&num);
	printf("\n%d%d",ft,st);
	for(i=2;i<num;i++)
	{
		printf(" %d",tt);
		tt=ft+st;
		ft=st;
		st=tt;
	}
}