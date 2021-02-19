#include<stdio.h>
#include<conio.h>
convt(int sec)
{
	float hour;
	hour=sec/(60*60);
	printf("number of hours %f",hour);
}
void main()
{
	int sec=68500;
	convt(sec);
	getch();
}
