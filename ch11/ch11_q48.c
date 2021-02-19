#include<stdio.h>
#include<conio.h>
void main()
{
	int km;
	float inches;
	printf("enter thr number of km\t");
	scanf("%d",&km);
	inches=km*39370.079;
	printf("corresponding inches are %f inches\t",inches);
	getch();
}
