#include<stdio.h>
#include<conio.h>
void main()
{
	float x;
	printf("enter x integer for range\t");
		scanf("%f",&x);
		if(x<0)
	{
		printf("error");
	}
	else if(x==0)
	{
		printf("number is 0");
	}
	else if(x>0 && x<=50)
	{
		printf("range[1,50]");
	}
	else if(x>50 && x<=100)
	{
		printf("range[51,100]");
	}
	else if(x>100)
	{
		printf("error");
	}
	getch();
}
