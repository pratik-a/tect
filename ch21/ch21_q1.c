#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char str[10]="hello",ABC[10];
	strcpy(ABC,str);
	printf("after copy ABC=%s",ABC);
	getch();
}
