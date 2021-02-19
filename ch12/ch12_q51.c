#include<stdio.h>
#include<conio.h>
struct emp
{
	char name[20];
	char id[10];
	int mthhours;
	int ruphours;
};
void main()
{
	struct emp emps[20];
	int n,i;
	printf("enter the number of emp\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\n*****%d employee*****",i+1);
		printf("\nenter the name of emp\t");
		scanf("%s",&emps[i].name);
		printf("\nenter the id of emp\t");
		scanf("%s",&emps[i].id);
		printf("\nenter the number of hours in month of emp\t");
		scanf("%d",&emps[i].mthhours);
		printf("\nenter the pay per hour of emp\t");
		scanf("%d",&emps[i].ruphours);
	}
	getch();
}
