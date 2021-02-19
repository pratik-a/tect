#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char str1[20]="Hello ",str2[20]="Ekarshi",str3[20];
	int i=0,j=0,k;
	k=strlen(str1)+strlen(str2);
	while(k>=0)
	{
		if(str1[i]!='\0')
		{
			str3[i]=str1[i];
		}
		else
		{
			str3[i]=str2[j];
			j++;
		}
		i++;
		k--;
	}
	printf("new string after concatenation = %s",str3);
	getch();
}
