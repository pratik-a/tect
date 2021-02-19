#include<stdio.h>
#include<conio.h>
void max(float i,float j,float k)
{
	if(i>j && i>k)
	{
	printf("\ni is greater");
	}
	else if(j>k)
	{
	printf("\nj is greater");
	}
	else
	{
	printf("\nk is greater");
	}
}
void min(float i,float j,float k)
{
	 if(i<j && i<k)
	{
	printf("\ni is smaller");
	}
	else if(j<k)
	{
	printf("\nj is smaller");
	}
	else
	{
	printf("\nk is smaller");
	}
}
void main()
{
	float i,j,k;
	printf("\nenter value i :\t");
	scanf("%f",&i);
	printf("\nenter value j :\t");
	scanf("%f",&j);
	printf("\nenter value k :\t");
	scanf("%f",&k);	
	max(i,j,k);
	min(i,j,k);
	getch();
}
