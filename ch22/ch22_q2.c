#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
	int rollnum;
	char name[20];
};
void main()
{
	FILE *fp;
	struct student *stud,*temp;
	int x,y,z,i;
	
	fp=fopen("Allinone.txt","w");
	
	printf("enter x\t");
	scanf("%d",&x);
	printf("enter y\t");
	scanf("%d",&y);
	printf("enter z\t");
	scanf("%d",&z);
	
	fprintf(fp,"\nx = %d",x);
	fprintf(fp,"\ny = %d",y);
	fprintf(fp,"\nz = %d",z);
	
	if(x>y && x>z)
	{
		fprintf(fp,"\n\nx(%d) is greater\n",x);
	}
	else if(y>z)
	{
		fprintf(fp,"\n\ny(%d) is greater\n",y);
	}
	else
	{
		fprintf(fp,"\n\nz(%d) is greater\n",z);
	}
		
	fprintf(fp,"\nx + y = %d",x + y);
	fprintf(fp,"\ny + z = %d",y + z);
	fprintf(fp,"\nx + z = %d",x + z);
	fprintf(fp,"\nx * y = %d",x * y);
	fprintf(fp,"\ny * z = %d",y * z);
	fprintf(fp,"\nx * z = %d",x * z);
	
	stud=(struct student *)malloc(2*sizeof(temp));
	temp=stud;
	for(i=0;i<2;i++,stud++)
	{
		printf("enter %d rollnumber of student\t",i+1);
		scanf("%d",&stud->rollnum);	
		printf("enter %d name of student\t",i+1);
		scanf("%s",stud->name);	
	}
	stud=temp;
	fprintf(fp,"\n\nstrudent detail\n\n");
	for(i=0;i<2;i++,stud++)
	{
		fprintf(fp,"%d - %s\n",stud->rollnum,stud->name);
	}
	fclose(fp);
	getch();
}
