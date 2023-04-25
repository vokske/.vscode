#include <stdio.h>
#include <stdlib.h>

int main(){

    int age;
    double gpa;
    char grade;

    printf("Age: %p\ngpa: %p\nGrade: %p", &age, &gpa, &grade);

    return 0;
}