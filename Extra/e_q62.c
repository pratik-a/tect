#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,test;
    printf("Prime numbers between 1 to 100\n");     
    for(i = 2; i <=100; i++){
        test= 0;
        for(j = 2; j <= i/2; j++)
		{
             if(i % j == 0)
			 {
                 test=1;
                 break;
             }
        }
          if(test==0)
            printf("%d ",i);
    }
   getch();
}
