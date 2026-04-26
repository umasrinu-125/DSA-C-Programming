#include<stdio.h>
#include<string.h>
union student {
    int rno;
    char name[20]; 
    float per;
};
int main() {
    union student s; 
    s.rno = 123;
    printf("rno: %d\n", s.rno);
    strcpy(s.name, "vickrom");  
    printf("name: %s\n", s.name);
    printf("rno now: %d (corrupted!)\n", s.rno);
    s.per = 99.99; 
    printf("per: %.2f\n", s.per);  
    return 0;
}
