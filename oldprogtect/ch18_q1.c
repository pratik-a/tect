#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct stud {
    int marks;
    char subject[30];
};
int main() {
    struct stud *ptr;
    struct stud *temp;
    ptr = (struct stud *)malloc(1 * sizeof(struct stud));
    printf("Enter Subject : ");
    scanf(" %[^\n]%*c",ptr->subject);
    printf("\nEnter Marks : ");
    scanf("%d",&ptr->marks);
    temp = ptr;
    printf("Original Struct\n ");
    printf("Subject Name  : %s\n",ptr->subject);
    printf("Subject Marks  : %d\n",ptr->marks);
    printf("Copy Struct\n ");
    printf("Subject Name  : %s\n",temp->subject);
    printf("Subject Marks  : %d\n",temp->marks);
}