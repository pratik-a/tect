#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i;
	FILE *fp;
	fp=fopen("tables.txt","a");
	fprintf(fp,"\n\n");
	for(i=0;i<10;i++)
	{
		fprintf(fp,"11 x %d = %d\n",i+1,11*(i+1));
	}
	fclose(fp);
	getch();
}
