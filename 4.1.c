#include <stdio.h>

void main(){
    FILE *fptr;

    fptr = fopen("hello.txt", "w");
    fprintf(fptr, "Hello,\n How are you?\n My name is Adam\n What is your name?");

    fclose(fptr);
}
