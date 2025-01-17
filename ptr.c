#include <stdio.h>

void main(){
    int num = 5;
    char letter = 'c';
    double num2 = 3.14;

    printf("Value of int: %d\n", num);
    printf("Address of int: %p\n", num);
    printf("Memory size of int: %d\n\n", sizeof(num));

    printf("Value of char: %c\n", letter);
    printf("Address of char: %p\n", letter);
    printf("Memory size of int: %d\n\n", sizeof(letter));

    printf("Value of double: %.2f\n", num2);
    printf("Address of double: %p\n", num2);
    printf("Memory size of int: %d\n\n", sizeof(num2));
}