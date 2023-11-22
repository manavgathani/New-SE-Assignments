#include<stdio.h>
main()
{
	int maths,physics,chemistry,total;
	printf("Enter the marks of maths:");
	scanf("%d",&maths);
	printf("Enter the marks of physics:");
	scanf("%d",&physics);
	printf("Enter the marks of chemistry:");
	scanf("%d",&chemistry);
	total=maths+physics+chemistry;
	printf("\n Total = %d",total);
	printf("\n Maths and Physics total=%d",maths+physics);
	if(maths>=65 && physics>=55 && chemistry>=50 && total>=190 || (maths+physics)>=140)
	{
		printf("\nCandidate is eligible");
	}
	else
	{
		printf("Candidate is not eligible");
	}
	
}