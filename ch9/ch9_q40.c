#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num[i],n;
	printf("enter number of times\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\nenter integer between 1 and 12 for knowing month\t");
	scanf("%d",&num[i]);
	switch(num[i])
	{
		case 1 : printf("january");
		break;
		case 2 : printf("februrary");
		break;
		case 3 : printf("march");
		break;
		case 4 : printf("april");
		break;
		case 5 : printf("may");
		break;
		case 6 : printf("june");
		break;
		case 7 : printf("july");
		break;
		case 8 : printf("august");
		break;
		case 9 : printf("september");
		break;
		case 10 : printf("octuber");
		break;
		case 11 : printf("november");
		break;
		case 12 : printf("december");
		break;
		default : printf("wrong number choosen");
	}
}
	getch();
}
