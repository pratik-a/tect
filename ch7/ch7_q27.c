#include<stdio.h>
#include<conio.h>
void avg(int dist,int fuel)
{
	printf("bike average is %d Km/L",dist/fuel);
}
void main()
{
	int dist=450,fuel=5;
	avg(dist,fuel);
	getch();
}
