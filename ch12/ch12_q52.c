#include<stdio.h>
#include<conio.h>
struct stud
{
	char name[20];
	int rollnum;
};
void main()
{
	struct stud studs[20];
	int n,i;
	printf("enter the number of stud\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\n*****enter %d student*****\n\n",i+1);
		printf("\nenter the name of emp\t");
		scanf("%s",&studs[i].name);
		printf("\nenter the rollnum of emp\t");
		scanf("%d",&studs[i].rollnum);
	}
	printf("\n\n*****printing student detail*****",i+1);
	for(i=0;i<n;i++)
	{
		
		printf("\n name=%s rollnum=%d \n",studs[i].name,studs[i].rollnum);
	}
	getch();
}
