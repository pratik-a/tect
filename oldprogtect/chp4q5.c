#include<stdio.h>
#include<conio.h>
void main()
{
	int x,sum=0,num;
	printf("enter value if x :\t");
	scanf("%d",&x);
	while(x!=0)
	{
		num=x%10;
		sum=sum*10+num;
		x=x/10;
	}
	printf("reverse of x is :\t%d",sum);
	getch();
}
