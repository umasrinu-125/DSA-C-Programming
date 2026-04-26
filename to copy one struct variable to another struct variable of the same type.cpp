#include<stdio.h>
#include<string.h>
struct student
{
	char name [50];
	int marks;
};
int main()
{
	struct student student1,student2;
	strcpy(student1.name,"vicky");
	student1.marks=90;
	student2=student1;
	printf("name:%s,marks:%d\n",student2.name,student2.marks);
}
