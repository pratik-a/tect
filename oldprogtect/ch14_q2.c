#include<stdio.h>
#include<stdlib.h>
struct intro
{
    char name[20];
    int m_num;
};
int main()
{
	int i;
    typedef struct intro intro1;
    intro1 *ptr;
    intro1 *temp;
    ptr=(intro1 *)calloc(2,sizeof(intro1));
    temp=ptr;
    for(i =0;i<2;i++,temp++)
    {
        printf("\nEnter name : ");
        scanf("%s",temp->name);
        printf("\nEnter Mobile Number : ");
        scanf("%d",&temp->m_num);
    }
    temp = ptr;
    for(i =0;i<2;i++,temp++)
    {
        printf("\nName : %s",temp->name);
        printf("\nMobile No : %d",temp->m_num);
    }
    
}
