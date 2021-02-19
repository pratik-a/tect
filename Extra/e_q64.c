#include <stdio.h>
#include<conio.h>
void main() 
{
    char c;
    printf("***** small alphabets");
    for (c ='a';c<= 'z';c++)
    {
     printf("%c %d \n", c,(int)c);
    }
    printf("\n\n***** capital alphabets");
    for (c='A'; c<='Z';c++)
    {
     printf("%c %d \n", c,(int)c);
    }
	getch();
}
