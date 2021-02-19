#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i;
	FILE *fp;
	fp=fopen("tables.txt","w+");
	for(i=0;i<10;i++)
	{
		fprintf(fp,"10 x %d = %d\n",i+1,10*(i+1));
	}
	fclose(fp);
	getch();
}
