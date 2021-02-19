#include<stdio.h>
#include<conio.h>
struct smpint
{
	int amount;
	int rate;
	int time;
};
void main()
{
	struct smpint smp;
	smp.amount=100000;
	smp.rate=4;
	smp.time=12;
	float final,sum=0,i=0;
	int k;
	for(i=0;i<smp.time;i++)
	{
		printf("\n\ninterest of amount %d month\t",k+1);
		final=(smp.amount*smp.rate*((1+i)/12))/100;
		printf("%f/-",final);
		sum=sum+final;
		k++;
	}
	printf("\n\n## interest of amount after 1 year %f/-\t",sum);
	getch();
}
