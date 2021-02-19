#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int * math(int x, int y)
{
    int *result,ans;
    ans=x+y;
    *result=ans;
    result++;
    ans=x*y;
    *result=ans;
    return result;
}
void main()
{
   int *temp;
   temp=math(10,20);
    printf("m : %d \n",*temp);
    temp--;
    printf("s : %d \n",*temp);
    getch();
}
