#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct detail
{
	char name[20];
	int phonenum;
};
void main()
{
	int i;
	struct detail *allm,*temp,ptdt;
	allm=(struct detail *)calloc(2,sizeof(ptdt));
	temp=allm;
	for(i =0;i<2;i++,allm++)
    {
        printf("\nEnter name : ");
        scanf("%s",allm->name);
        printf("\nEnter Mobile Number : ");
        scanf("%d",&allm->phonenum);
    }
    allm=temp;
	for(i =0;i<2;i++,allm++)
    {
        printf("\nName : %s",allm->name);
        printf("\nMobile No : %d",allm->phonenum);
    }
	getch();
}
