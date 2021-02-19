#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[20];
	int len;
	printf("enter name \t");
	scanf("%s",&name);
	len=strlen(name);
	printf("length of name %d",len);
	getch();
}
