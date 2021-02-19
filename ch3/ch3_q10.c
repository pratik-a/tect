#include<stdio.h>
#include<conio.h>
void sum(int arr[],int a)
{
	int i,sum=0;
	for(i=1;i<=a;i++)
	{
		if(i%2==0)
		{
			sum=sum+arr[i];
		}
	}
	printf("sum of even numbers:%d",sum);
}
void main()
{
	int i,arr[20],a;
	printf("enter a specified number upto which you want to find sum :\t");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("enter %d value : \t",i);
		scanf("%d",&arr[i]);
	}
	sum(arr,a);
	getch();
}
