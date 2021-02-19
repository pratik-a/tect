#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp= fopen("tables.txt","w+");
    for(int i = 1;i<=10;i++)
        fprintf(fp,"10 x %d = %d\n",i,10*i);
    fclose(fp);

}