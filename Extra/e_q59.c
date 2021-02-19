#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i;
	printf("enter x integer for divisor\t");
	scanf("%d",&x);
	printf("divisors are");
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			printf("%d ",i);
		}
	}
	getch();
}
