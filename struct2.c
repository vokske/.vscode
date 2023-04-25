#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{

    char name[30];
    char major[30];
    char grade;
    int age;
};

int main(){

    struct Student student1;
    strcpy(student1.name, "Thomas");
    strcpy(student1.major, "Agriculture");
    student1.grade = 'B';
    student1.age = 21;

    struct Student student2;
    strcpy(student2.name, "Angie");
    strcpy(student2.major, "Art");
    student2.grade = 'C';
    student2.age = 20;


    printf("%s\n", student2.name);
    printf("%s\n", student2.major);
    printf("%c\n", student2.grade);
    printf("%d", student2.age);


    
    return 0;
}