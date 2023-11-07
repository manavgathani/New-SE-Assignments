// 	find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
main()
{
	int w,l,h,area;
	printf("Enter the length,width and heigth of rectagular prism:");
	scanf("%d%d%d",&l,&w,&h);
	area=2*(w*l+h*l+h*w);
	printf("The area of rectangular prism is %d",area);
	
}