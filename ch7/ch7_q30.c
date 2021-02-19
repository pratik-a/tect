#include<stdio.h>
#include<conio.h>
void max(int num[10],int n)
{
	int i,maximum=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]>maximum)
		{
			maximum=num[i];
		}
	}
	printf("\nmaximum=%d",maximum);
}
void min(int num[10],int n)
{
	int i,minimum=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]<minimum)
		{
			minimum=num[i];
		}
	}
	printf("\nminimum=%d",minimum);
}
void main()
{
	int num[10],i,n;
	printf("how many number you want to enter\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter num%d\t",i+1);
		scanf("%d",&num[i]);
	}
	max(num,n);
	min(num,n);
	getch();
}
