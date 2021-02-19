#include<stdio.h>
#include<conio.h>
float max(float i,float j,float k)
{
	if(i>j && i>k)
	{
	printf("\ni is greater");
	return i;
	}
	else if(j>k)
	{
	printf("\nj is greater");
	return j;
	}
	else
	{
	printf("\nk is greater");
	return k;
	}
}
float min(float i,float j,float k)
{
	 if(i<j && i<k)
	{
	printf("\ni is smaller");
	return i;
	}
	else if(j<k)
	{
	printf("\nj is smaller");
	return j;
	}
	else
	{
	printf("\nk is smaller");
	return k;
	}
}
void main()
{
	float i,j,k,l,m;
	printf("\nenter value if i :\t");
	scanf("%f",&i);
	printf("\nenter value if j :\t");
	scanf("%f",&j);
	printf("\nenter value if k :\t");
	scanf("%f",&k);	
	l=max(i,j,k);
	printf(" %f",l);
	m=min(i,j,k);
	printf(" %f",m);
	getch();
}	
