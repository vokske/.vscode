#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int min = 0;
    int max = 100;
    int n = rand();

    if(n > 0){

        printf("%d is positive\n", n);
    }
    
    else if(n == 0){
        printf("%d is zero\n", n);
    }

    else{
        printf("%d is negative\n", n);
        }
        

    return 0;
}