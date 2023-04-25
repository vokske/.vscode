#include <stdio.h>
#include <stdlib.h>


int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade); // Add this line to read user input

    switch (grade){

        case 'A':
            printf("You did great!");
            break;
        case 'B':
            printf("You did okay");
            break;
        case 'C':
            printf("You did poorly");
            break;
        case 'D':
            printf("You did very bad");
            break;
        case 'F':
            printf("You failed");
            break;
        default:
            printf("Invalid grade");

    }

    return 0; // Move the return statement outside the switch block
}
