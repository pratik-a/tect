#include<stdio.h>
#include<conio.h>
void main()
{
	int num[20],chk,i,maximum;

	for(i=0;i<20;i++)
	{
		printf("enter %d number",i+1);
		scanf("%d",&num[i]);
	}
	maximum=num[0];
	for(i=0;i<20;i++)
	{
		if(num[i]>maximum)
		{
			maximum=num[i];
			chk=i+1;
		}
	}
	printf("\nmaximum=%d index=%d",maximum,chk);
	getch();
	}
