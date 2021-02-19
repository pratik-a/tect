#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr,add,min=0,max=0;
	int i;
	ptr=&add;
	printf("enter number in pointer array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&ptr);
		ptr++;
	}
	ptr=&add;
	for(i=0;i<5;i++)
	{
		if(*ptr>max)
		{
			max= (*ptr);
		}
		if(*ptr<min)
		{
			min= (*ptr);
		}
		ptr++;
	}
	printf("max-min= %d",max-min);
	getch();
	}
