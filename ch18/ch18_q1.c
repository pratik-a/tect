#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct detail
{
    char name[20];
    int num;
};
void main()
{
	int i;
	struct detail *d1,*copy;
	d1=(struct detail *)malloc(2*sizeof(copy));
	for(i=0;i<2;i++,d1++)
	{
		printf("enter name\t");
		scanf("%s",d1->name);
		printf("enter number\t");
		scanf("%d",&d1->num);
	}
	d1--;
	d1--;
	copy=d1;
	for(i=0;i<2;i++,d1++)
	{
		printf("\nenter name %s\t",d1->name);
		printf("\nenter number %d\t",d1->num);
	}
	for(i=0;i<2;i++,copy++)
	{
		printf("\nenter name %s\t",copy->name);
		printf("\nenter number %d\t",copy->num);
	}
	getch();
}
