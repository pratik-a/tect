#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sum=0,mult=1;
	for(i=1;i<=10;i++)
	{
		mult=1;
		for(j=1;j<=2;j++)
		{
			mult=mult*i;
		
		}
			printf("\nsquare of %d =%d",i,mult);
		sum+=mult;
	}
	printf("\nsum of all squares=%d",sum);
}
