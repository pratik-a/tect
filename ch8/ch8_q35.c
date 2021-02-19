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
		count=count*10+rem;
	}
	if(read==count)
	{
		printf("%d number is palindrome",count);
	}
	else
	{
		printf("%d number is not palindrome",count);
	}
	getch();
}
