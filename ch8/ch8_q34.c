#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	float s=0;
	while(i<=50)
	{
		s=s+(1/i);
		i++;
	}
	printf("sum = %f",s);
	getch();
}
