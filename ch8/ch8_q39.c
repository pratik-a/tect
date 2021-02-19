#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b=0,choice;
	printf("choose\n1:AND\n2:OR\n3:NOT\n");
	scanf("%d",&choice);
	switch(choice)
	{
			case 1 : 
			if(a&&b)
			{
				printf("both are true\n");
			}
			printf("AND operation is performed\n");
			break;
			case 2 :
				if(a||b)
			{
				printf("atleast one is true\n");
			}
			printf("OR operation is performed\n");
			break;
			case 3 :
				if(!(a&&b))
				{
					printf("opposite of 1 is 0\n");
				}
				printf("NOT operation is performed\n");
			break;
			default : printf("option not available\n");
	}
	getch();
}
