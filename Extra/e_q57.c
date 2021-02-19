#include<stdio.h>
#include<conio.h>
void main()
{
	float x,y;
	printf("enter x quardinate\t");
		scanf("%f",&x);

printf("enter y quardinate\t");
		scanf("%f",&y);	
		if(x>=0 && y>=0)
	{
		printf("quadrant 1");
	}
	else if(x<0 && y>0)
	{
		printf("quadrant 2");
	}
	else if(x<0 && y<0)
	{
		printf("quadrant 3");
	}
	else if(x>0 && y<0)
	{
		printf("quadrant 4");
	}
	getch();
}
