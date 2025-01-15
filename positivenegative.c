#include <stdio.h>
void main(){
	int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num == 0){
        printf("Number is 0\n");
    } else if (num > 0){
        printf("Number is positive\n");
    } else {
        printf("Number is negative\n");
    }
	return 0;
}