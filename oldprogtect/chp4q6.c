#include<stdio.h>
#include<conio.h>
void main()
{
	int x,sum=0,num,fact=1,temp;
	printf("enter value if x :\t");
	scanf("%d",&x);
	temp=x;
	while(x!=0)
	{
		fact=1;
		num=x%10;
		while(num>0)
		{
			fact=fact*num;
			num--;
		}
		sum=sum+fact;
		x=x/10;
	}
	if(sum==temp)
	printf("num %d is special",sum);
	getch();
}
