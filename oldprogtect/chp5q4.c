#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sum=0,mult=1;
	for(i=1;i<=6;i++)
	{
		mult=1;
		for(j=1;j<=i;j++)
		{
			mult=mult*i;
		}
		sum+=mult;
	}
	printf("x=%d",sum);
}
