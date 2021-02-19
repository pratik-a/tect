#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int num=16,i;
    ptr=(int*)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
    {
        ptr[i]=i;
        printf("The Number in array : %d\n",ptr[i]);
    }
}
