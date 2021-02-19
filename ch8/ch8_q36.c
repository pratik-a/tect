#include<stdio.h>
#include<conio.h>
void main()
{
	int read,temp,count=0,rem;
	printf("enter the intger:\t");
	scanf("%d",&read);
	temp=read;
	while(temp>0)
	{
		rem=temp%10;
		temp=temp/10;
		if(rem==1)
		count++;
	}
	printf(" %d times number 1 occured in %d",count,read);
	getch();
}
