#include<stdio.h>
#include<conio.h>
#include<math.h>
dist(int x1,int y1,int x2,int y2)
{
	float dis;
	dis=sqrt((x1-x2)*(x1-x2)-(y1-y2)*(y1-y2));
	printf("distance between point is %f",dis);
}
void main()
{
	int x1,y1,x2,y2;
	printf("for first point enter the cordinate x,y\n");
	scanf("%d %d",&x1,&y1);
	printf("for secound point enter the cordinate x,y\n");
	scanf("%d %d",&x2,&y2);
	dist(x1,y1,x2,y2);
	getch();
}
