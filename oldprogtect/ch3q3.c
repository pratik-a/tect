#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("enter value if x :\t");
	scanf("%d",&x);
	printf("enter value if x :\t");
	scanf("%d",&y);	
	printf("\nbefore swapping \n x=%d y=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nafter swapping \n x=%d y=%d",x,y);
	getch();
}
	
