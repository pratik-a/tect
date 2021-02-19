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
	temp=num[0];
	num[0]=num[5];
	num[5]=temp;
	for(i=0;i<6;i++)
	{
		printf("\n %d number is %d\t",i+1,num[i]);
	}
	getch();
}
