#include<stdio.h>
#include<conio.h>
void main()
{
	int num[7],i;

	for(i=0;i<7;i++)
	{
		printf("enter %d number\t",i+1);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<7;i++)
	{
		if(num[i]<0)
		{
			num[i]=100;
		}
		printf("%d ",num[i]);
	}
	getch();
}
