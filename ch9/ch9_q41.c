#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],sum=0,i;
	float per;
	for(i=0;i<6;i++)
	{
		printf("enter %d the subject marks out of 100\t",i+1);
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	per=(sum/6);
	printf("percentage %f",per);
	getch();
}
