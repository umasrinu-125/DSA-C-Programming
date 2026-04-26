#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[10];
    int s1, s2, s3, s4, s5;
};

int main(int argc, char *argv[]) {
    struct student s;
    int total;
    
    // Fix: argv[0] is program name, use argv[1] for student name
    if (argc != 7) {
        printf("Usage: %s <name> <marks1> <marks2> <marks3> <marks4> <marks5>\n", argv[0]);
        return 1;
    }
    
    strcpy(s.name, argv[1]);  // Fixed: argv[1] instead of argv[0]
    s.s1 = atoi(argv[2]);
    s.s2 = atoi(argv[3]);
    s.s3 = atoi(argv[4]);
    s.s4 = atoi(argv[5]);
    s.s5 = atoi(argv[6]);
    
    total = s.s1 + s.s2 + s.s3 + s.s4 + s.s5;
    
    printf("Name: %s\n", s.name);
    printf("Marks: %d %d %d %d %d\n", s.s1, s.s2, s.s3, s.s4, s.s5);
    printf("Total: %d\n", total);
    
    return 0;
}
