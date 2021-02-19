#include<stdio.h>
#include<conio.h>
void main()
{
	int x=0,i;
	for(i=1;i<=6;i++)
	{
		if(i==1)
		{
			x=x+1;
		}
		else
		{
			x=x+(i*10+i);
		}
	}
	printf("x=%d",x);
}
