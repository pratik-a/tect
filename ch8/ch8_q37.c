#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=4-i;j>0;j--)
		printf(" ");
		for(k=0;k<=i;k++)
		{
			printf("%d",i+1);
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
