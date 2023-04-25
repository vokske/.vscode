#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int group [3][3]= {
                        {3, 4, 5},
                        {7, 8, 9}, 
                        {11, 12, 13}   
                        };
    int i, j;

    for(i = 0; i < 3; i ++){

        for (j = 0; j < 3; j ++){
            printf("%d,", group[i][j]);

        }
    printf("\n");

    }

    return 0;
}