#include <stdio.h>

void main(){

    FILE *fptr;

    fptr = fopen("hello.txt", "r");

    char myString[100];

    while(fgets(myString,100,fptr)){
        printf("%s", myString);
    }
    
}