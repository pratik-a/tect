#include<stdio.h>
#include<conio.h>
struct ptr
{ int value;
 int *next;
};
void main()
{ struct ptr node1,node2;

printf("the value of node 1");
scanf("%d",&node1.value);
node1.next=&node2;
printf("the value of node 2");
scanf("%d",&node2.value);
node2.next=0;
printf("node1=%d node2=%d",node1.value,*node1.next);
getch();
}

