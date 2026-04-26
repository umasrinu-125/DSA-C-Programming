#include <stdio.h>
struct student {
    int rollno;
    char name[50];
    float percentage;
};
int main() {
    struct student a;   
    printf("Enter roll number, name, and percentage: ");
    scanf("%d %s %f", &a.rollno, a.name, &a.percentage);  
    printf("\nStudent details are:\n");
    printf("Name: %s\n", a.name);
    printf("Roll No.: %d\n", a.rollno);
    printf("Percentage: %.2f\n", a.percentage);  
    return 0;
}
