#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("enter value of x \t");
	scanf("%d",&x);
	printf("enter value of y \t");
	scanf("%d",&y);
	printf("before swaping x=%d y=%d",x,y);	
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nafter swaping x=%d y=%d",x,y);	
	getch();
}
