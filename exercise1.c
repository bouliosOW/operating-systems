#include <stdio.h>
void main(){
	int num;
    printf("Please enter a temperature: ");
    scanf("%d", &num);

    printf("%d\n", num < 85 && num > 70);
	return 0;
}