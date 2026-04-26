#include <stdio.h>
#include <string.h>
struct Employee {
    int Id_no;
    char name[10];
    float salary;
};
int main() {
    struct Employee E1 = {103, "Deva", 50000};
    struct Employee E2;
    E2.Id_no = 109;
    strcpy(E2.name, "Ravi");
    E2.salary = 55000;
    struct Employee E3 = {103, "Uma", 48000};
    struct Employee Ey; 
    printf("Enter Employee Id no: ");
    scanf("%d", &Ey.Id_no);
    printf("Enter Employee Name: ");
    scanf("%s", Ey.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &Ey.salary);
    printf("\nEmployee details are:\n");
    printf("%d %s %.2f\n", E1.Id_no, E1.name, E1.salary);
    printf("%d %s %.2f\n", E2.Id_no, E2.name, E2.salary);
    printf("%d %s %.2f\n", E3.Id_no, E3.name, E3.salary);
    printf("%d %s %.2f\n", Ey.Id_no, Ey.name, Ey.salary);
    
    return 0;
}
