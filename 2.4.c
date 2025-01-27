#include <stdio.h>

void main(){
    int i, j;

    for (i = 0; i < 101; i += 10){
        printf("Count by 10s: %d\n", i);
    }


    for (i = 1; i < 11; i += 1){
        for (j = 1; j < 11; j += 1){
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

}
