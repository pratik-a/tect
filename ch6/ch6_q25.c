#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x,y;
	int check;
	printf("enter value of x:\t");
	scanf("%c",&x);
	fflush(stdin);
	printf("enter value of y:\t");
	scanf("%c",&y);
	if(x==y)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	getch();
}
