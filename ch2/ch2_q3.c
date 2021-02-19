#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=0;i<5;i++)
	{
		if(i%2!=0)
		{
			printf("**\n");
			printf("**\n");
		}
		else
		{
			printf("********\n");
			printf("********\n");
		}
	}
	getch();
}
