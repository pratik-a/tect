#include<stdio.h>
#include<conio.h>
void main()
{
	float x=10.5,*ptr;
	ptr=&x;
	*ptr=*ptr+245.1;
	printf("%f",*ptr);
	getch();
}
