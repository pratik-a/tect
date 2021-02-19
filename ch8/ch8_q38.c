#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,fact=1;
	while(i<=10)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of 10 is %d",fact);
	getch();
}
