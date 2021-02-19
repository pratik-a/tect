#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("enter value if x :\t");
	scanf("%d",&x);
	printf("enter value if y :\t");
	scanf("%d",&y);
	printf("\nbefore swapping \n x=%d y=%d",x,y);	
	z=x^y;
	x=z^x;
	y=z^y;
	printf("\nafter swapping \n x=%d y=%d",x,y);
	getch();
}
