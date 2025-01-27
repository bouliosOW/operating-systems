#include <stdio.h>
void main(){
	int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num == 0){
        printf("Number is 0\n");
    } else if (num % 2 == 1){
        printf("Number is odd\n");
    } else {
        printf("Number is even\n");
    }
	return 0;
}
