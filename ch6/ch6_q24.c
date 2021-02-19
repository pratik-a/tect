#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char namea;
	char nameb;
	printf("enter value of A:\t");
	scanf("%c",&namea);
	fflush(stdin);
	printf("enter value of B:\t");
	scanf("%c",&nameb);
	printf("\nenter value of A:%c\t",namea);
	printf("\nenter value of B:%c\t",nameb);
	getch();
}
