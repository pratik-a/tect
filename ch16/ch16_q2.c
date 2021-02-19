#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char c;
	fp=fopen("tables.txt","r");
	c=fgetc(fp);
	while(c!=EOF)
	{
		printf("%c",c);
		c=fgetc(fp);
	}
	fclose(fp);
	getch();
}
