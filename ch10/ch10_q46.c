#include<stdio.h>
#include<conio.h>
void main()
{
	int num[6],sum=0,i,temp;
	for(i=0;i<6;i++)
	{
		printf("enter %d number\t",i+1);
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<6;i++)
	{
		if(i>2 && i<=6)
		{
			num[i]=3*num[i-2];
			printf("\n %d number is %d\t",i+1,num[i]);
		}
		else
		{
			printf("\n %d number is %d\t",i+1,num[i]);
		}
	}
	getch();
}
