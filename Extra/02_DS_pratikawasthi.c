#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int total=20;
static int index=0;
void swap(int minheap[], int place1, int place2)
{
	int temp;
	temp = minheap[place1];
	minheap[place1] = minheap[place2];
	minheap[place2] = temp;
}

void InsertPriorityQueue(int minheap[], int value)
{
	int parent, child, i;
	index++;
	i = index;
	if (index >total + 1)
	{
		printf("\n Heap is full");
	}
	else
	{
		minheap[index] = value;
		while (i>1)
		{
			parent = i / 2;
			child = minheap[i];
			if (minheap[parent] > child)
			{
				swap(minheap, i / 2, i);
				i = parent;
			}
			else
			{
				break;
			}
		}
	}
}
void Display(int minheap[], int n)
{
	int i;
	printf("\n");
		for ( i = 1; i <= n; i++)
		{
			printf("%d ", minheap[i]);
		}

}
void DeletePriorityQueue(int minheap[], int* N) 
{
	int i = 1, left, right, last;
	int n = *N;
	if (n == 0)
	{
		printf("\n queue is empty");
	}
}
				
void main()
{
	int number, i, choice, minheap[20], value;
	printf("\n 1.Insert in heap");
	printf("\n 2.Delete in heap");
	printf("\n 3.Display heap");
	printf("\n 4.exit");
	printf("\n\nEnter your choice:");
	scanf("%d", &choice);
	while(choice!=4)
	{
		if(choice==1)
		{
			printf("\nenter number of elements you want to enter in heap\t");
			scanf("%d",&number);
			for(i=0;i<number;i++)
			{
				printf("\n Enter node :");
				scanf("%d", &value);
				InsertPriorityQueue(minheap, value);
			}
		}
		else if(choice==2)
		{
			DeletePriorityQueue(minheap, &number);
		}
		else if(choice==3)
		{
			Display(minheap, number);
		}
		else
		{
			exit(0);
		}
	printf("\nEnter your choice:");
	scanf("%d", &choice);
	}
	getch();
}
