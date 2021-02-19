#include <stdio.h>
#include<conio.h>
void main()
{
    float principle=10,rate=10,time=10,simpleinterest;

  /*  printf("Enter the principle :");
    scanf("%f", &principle);
    printf("Enter the rate :");
    scanf("%f", &rate);
    printf("Enter the time :");
    scanf("%f", &time);
    */
	simpleinterest=principle*rate*time / 100;
	printf("Simple interest is %d",simpleinterest);

    getch();
}
