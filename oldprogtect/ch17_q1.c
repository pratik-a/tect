#include<stdio.h>
#include<stdlib.h>
float *math1()
{
    static float arr[2];
    arr[0]=5+10;
    arr[1]=5*10;
    return arr;
}
int main()
{
    float *arr;
   
    arr=math1();
     printf("hell");
    printf("Summation : %f\n",arr[0]);
    printf("Multiplication : %f\n",arr[1]);
    
}