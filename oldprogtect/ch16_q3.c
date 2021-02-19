#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp= fopen("tables.txt","a");
    fprintf(fp,"\n\nTable of 11\n");
    for(int i = 1;i<=11;i++)
        fprintf(fp,"11 x %d = %d\n",i,10*i);
    fclose(fp);
}