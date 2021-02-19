#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char str1[20]="www.google.com";
	int i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]=='.')
		{
			printf("\n");
		}
		else
		{
			printf("%c",str1[i]);
		}
		i++;
	}
	getch();
}
