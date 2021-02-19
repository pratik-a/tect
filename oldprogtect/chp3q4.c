#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("enter value if x :\t");
	scanf("%d",&x);
	printf("enter value if y :\t");
	scanf("%d",&y);	
	if(x==0 && y==0)
	printf("both x and y are 0");
	else if (x==0)
	printf("x is 0");
	else if(y==0)
	printf("y is 0");
	else
	printf("x*y=%d \t x/y=%d",x*y,x/y);
	getch();
}
