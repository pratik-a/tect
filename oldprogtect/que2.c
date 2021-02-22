#include<stdio.h>
#include<conio.h>
void main()
{
	int N,i,a,b,c;
	int num[1000];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf("%d \t",num[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		a=num[i]%10;
		num[i]=num[i]/10;
		b=num[i]%10;
		num[i]=num[i]/10;
		c=num[i]%10;
	if(a>b>c)
	{
		num[i]=(a*11)+(c*7);
		
	}
if(a>c>b)
	{
		num[i]=a*11+b*7;
	}

if(b>a>c)
	{
		num[i]=b*11+c*7;
	}

if(b>c>a)
	{
		num[i]=b*11+a*7;
	}

if(c>b>a)
	{
		num[i]=c*11+a*7;
	}

if(c>a>b)
	{
		num[i]=c*11+b*7;
	}


/*	if(num[i]>99)
	{
		num[i]=100-num[i];
	}*/
	printf("%d \t",num[i]);
	}
	getch();
}
