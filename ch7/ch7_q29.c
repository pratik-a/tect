#include<stdio.h>
#include<conio.h>
float avg(int num1,int num2)
{
	return num1/num2;
}
void main()
{
	int num1,num2;
	float d;
	printf("enter num1\t");
	scanf("%d",&num1);
	printf("enter num2\t");
	scanf("%d",&num2);
	d=div(num1,num2);
	printf("divison of num1 by num2 %f",d);
	getch();
}
