#include<iostream>
#include<conio.h>
using namespace std;
void insert(int pol[10],int n)
{
	cout<<"\n\n****** entering polynomial *****\n\n";
	for(int i=0;i<=n;i++)
	{
		cout<<"enter the value for "<<i<<" degree \t ";
		cin>>pol[i];
	}
}
void mul(int final[10],int pol1[10],int pol2[10],int n1,int n2)
{
	for(int i=0;i<=n1;i++)
	{
		for(int j=0;j<=n2;j++)
		{
			final[i+j]+=pol1[i]*pol2[j];
		}
	}
}
void display(int final[10],int n)
{
	cout<<"\n\n##### equation #####\n\n";
	cout<<"equation is \t ";
	for(int i=n;i>=0;i--)
	{
		if(final[i]!=0 && i!=0)
		{
		cout<<"("<<final[i]<<")"<<"x^"<<i<<" + ";
		}
		else if(i==0)
		{
			cout<<final[i];
		}
		
	}
}
	
int main()
{
	int pol1[10]={0},pol2[10]={0},final[10]={0},n1,n2,n;
	cout<<"\n\nenter the degree for first polynomial mul \t ";
	cin>>n1;
	insert(pol1,n1);
	display(pol1,n1);
	cout<<"\n\nenter the degree for secound polynomial mul \t ";
	cin>>n2;
	insert(pol2,n2);
	display(pol2,n2);
	n=n1+n2;
	mul(final,pol1,pol2,n1,n2);
	display(final,n);
	getch();
	return 0;
}
