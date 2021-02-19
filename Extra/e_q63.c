#include<stdio.h>
#include<conio.h>
void main()
{
char str1[20], str2[20];
int i;
printf("Input a string\t");
scanf("%s", str2);
for(i=0; str2[i]!='\0'; i++)
str1[i]=str2[i];
str1[i]='\0';
printf("\n");
printf("string after copy: %s\t", str2);
getch();
}
