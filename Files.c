#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fpointer = fopen("Meals.txt", "a");
    fprintf(fpointer, "\nUgali Mayai");

    return 0;
}
