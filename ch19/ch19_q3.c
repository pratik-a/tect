#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define PI 3.14
#define AREA(h,r,l) (PI*r*r)+(PI*r*l)
#define VOLUME(h,r) (PI*r*r*h)/3
void main()
{
	float area,volume;
	area=AREA(10,5,4);
	volume=VOLUME(10,5);
	printf("area of cone %f\t",area);
	printf("\nvolume of cone %f\t",volume);
	getch();
}
