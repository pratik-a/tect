#include<stdio.h>
#include<conio.h>
void main()
{
	int i,pass[4]={3,3,5,5},epass[4],check=0;
	printf("enter password \n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&epass[i]);
		if(pass[i]!=epass[i])
		{
			check++;
			printf("incorrect password");
			break;
		}
	}
		if(check==0)
		printf("correct password");
		getch();
}
