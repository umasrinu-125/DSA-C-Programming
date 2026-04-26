#include <stdio.h>
struct date {
    unsigned int d : 5;  
    unsigned int m : 4;    
    unsigned int y : 7;  
};
int main() {
    struct date x = {31, 12, 25};  
    printf("%d %d %d\n", x.d, x.m, x.y);
    printf("Size of structure: %lu bytes (instead of 12 bytes with ints)\n", 
           sizeof(struct date));   
    return 0;
}
