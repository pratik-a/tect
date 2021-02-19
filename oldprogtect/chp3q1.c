#include<stdio.h>
#include<conio.h>
void main()
{
	int x=3,y=2,w=0,z=9;
	if(x>y && x>w && x>z)
	{
	printf("x is greater");
	}
	else if(y>w && y>z)
	{
	printf("y is greater");
	}
	else if(w>z)
	{
	printf("w is greater");
	}
	else
	{
	printf("z is greater");
	}
	getch();
}
