#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SPEED 59
#define DISTANCE 18
#define TIME ((float)DISTANCE/(float)SPEED)
void main()
{
	float time;
	time=TIME;
	printf("time required is %f hours or %f mins",time,time*60);
	getch();
}

