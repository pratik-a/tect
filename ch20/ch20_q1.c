#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"sum.h"
#include"mul.h"
#include"div.h"
void main()
{
	float x,y,add,mult,divn;
	printf("enter x\t");
	scanf("%f",&x);
	printf("\nenter y\t");
	scanf("%f",&y);
	add=sum(x,y);
	mult=mul(x,y);
	divn=divison(x,y);
	printf("\nsummation %f\t",add);
	printf("\nmultiplication %f\t",mult);
	printf("\ndivison %f\t",divn);
	getch();
}
