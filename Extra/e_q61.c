#include<stdio.h>
	#include<conio.h>  
     void main()    
    {    
    int n, rev=0, rem;    
    printf("Enter a number: ");    
      scanf("%d", &n);    
      while(n!=0)    
      {    
         rem=n%10;    
         rev=rev*10+rem;    
         n/=10;    
      }    
      printf("Reversed Number: %d",rev);    
    getch();  
    }
