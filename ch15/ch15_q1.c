#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int size=16,*array,*ptr,i;
	array=(int*)malloc(size*sizeof(int));
	ptr=array;
	for(i=0;i<16;i++,array++)
	{
		printf("enter %d value\t",i+1);
		scanf("%d",array);
	}
	printf("\nbefore changing value");
	array=ptr;
	for(i=0;i<16;i++,array++)
	{
		printf("\n%d value %d",i+1,*array);
	}
	array=ptr;
	printf("\n");
	for(i=0;i<16;i++,array++)
	{
		printf("change %d value\t",i+1);
		scanf("%d",array);
	}
	printf("\nafter changing value");
	array=ptr;
	for(i=0;i<16;i++,array++)
	{
		printf("\n%d value %d",i+1,*array);
	}
	getch();
}
