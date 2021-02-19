#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[20];
	int length,i;
	printf("enter your name\t");
	scanf("%s",name);
	length=strlen(name);
	for(i=length;i>=0;i--)
	{
		printf("%c",name[i]);
	}
	getch();
}
