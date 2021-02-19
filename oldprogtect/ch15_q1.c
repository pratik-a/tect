#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int num=16;
    ptr=(int*)malloc(num*sizeof(int));
    printf("Elements Before Changing the Value : \n");
    for(int i=0;i<num;i++)
    {
        ptr[i]=i;
        printf("The Number in array : %d\n",ptr[i]);
    }
    printf("Elements After Changing the Value : \n");
    for(int i=0;i<num;i++)
    {
        ptr[i]=i+1;
        printf("The Number in array : %d\n",ptr[i]);
    }
}