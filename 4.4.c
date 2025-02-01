#include <stdio.h>

int main() {
    FILE *fptr;
    char lett[255];

    fptr = fopen("hello.txt", "w");
    
    fprintf(fptr, "Hello,\nHow are you?\nMy name is Adam.\nWhat is your name?\n");
    

    fclose(fptr);

    fptr = fopen("hello.txt", "r");
  
    while (fgets(lett, sizeof(buffer), fptr) != NULL) {
        printf("%s", lett);
    }

    fclose(fptr);

    return 0;
}
