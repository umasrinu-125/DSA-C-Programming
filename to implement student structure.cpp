#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	float per;
}
s1={101,"uma",89.90},s2;
int main()
{
	struct student s3={103,"sai",90.09},s4;
	s2.rno=102;
	strcpy(s2.name,"vicky");
	s2.per=89.90;
	printf("enter s4 rno");
	scanf("%d",&s4.rno);
	printf("enter s4 name");
	scanf("%s",&s4.name);
	printf("enter s4 per");
	scanf("%f",&s4.per);
	printf("student details are:\n");
	printf("%d %s %f",s1.rno,s1.name,s1.per);
	printf("%d %s %f",s2.rno,s2.name,s2.per);
	printf("%d %s %f",s3.rno,s3.name,s3.per);
	printf("%d %s %f",s4.rno,s4.name,s4.per);
}
