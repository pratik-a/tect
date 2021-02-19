#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5]={10, 20, 30, 40, 50},*ptr,i;
	printf("\nbefore changing value\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",x[i]);
	}
	ptr=&x;
	ptr++;
	*ptr=5;
	printf("\nafter changing value\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",x[i]);
	}
	getch();
}
