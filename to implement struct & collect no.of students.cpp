#include<stdio.h>
struct student 
{
    int rno;
    char name[50]; 
    float per;
};
int main()  
{
    struct student s[100];
    int i, n;
    float per;
    printf("Enter no of students: ");
    scanf("%d", &n);
    printf("Enter student details: \n");
    for(i = 0; i < n; i++)
    {
        printf("Enter student %d rno: ", i+1);
        scanf("%d", &s[i].rno);
        
        printf("Enter student %d name: ", i+1);
        scanf("%s", s[i].name);  
        printf("Enter student %d per: ", i+1);
        scanf("%f", &per);
        s[i].per = per;
    }  
    printf("\nDisplay student details:\n");
    for(i = 0; i < n; i++)
    {
        printf("\n%d %s %.2f", s[i].rno, s[i].name, s[i].per);  
    }
    return 0;
}
