#include <stdio.h>

int main() {
    int num = 0; 

    while (num <= 10) { 
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
        num++; 
    }

    return 0;
}
