#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[10],count=0;
	for(i=0;i<10;i++)
	{
		printf("enter the %d value :\t",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i=i+2)
	{
		count+=arr[i];
	}
	printf("\nsum of odd values %d",count);
	getch();
}
