#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],sum=0,i;
	float avg;
	printf("enter number of paper maths\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d the paper marks in maths\t",i+1);
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	avg=(sum/6);
	printf("percentage %f",avg);
	getch();
}
