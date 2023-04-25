#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;
    int *pAge = &age; //declaring the pointer that stores the memory address of the variable 'age'

    printf("%p", pAge); // printing out the memory address
    printf("%d", *pAge); // dereferencing the pointer - getting the actual variable value stored in the memory address

    return 0;
}