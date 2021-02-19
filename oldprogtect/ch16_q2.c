#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char c;
    fp= fopen("tables.txt","r");
    c = fgetc(fp);
    while (c != EOF)
    {
        printf("%c",c);
        c = fgetc(fp);
    }
    fclose(fp);

}
