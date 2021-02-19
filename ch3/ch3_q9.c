#include<stdio.h>
#include<conio.h>
void sum(int arr[])
{
	int i,sum=0;
	for(i=1;i<=8;i++)
	{
		if(i%2!=0)
		{
			sum=sum+arr[i];
		}
	}
	printf("sum of odd numbers:%d",sum);
}
void main()
{
	int i,arr[8];
	for(i=1;i<=8;i++)
	{
		printf("enter %d value : \t",i);
		scanf("%d",&arr[i]);
	}
	sum(arr);
	getch();
}
