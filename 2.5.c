#include <stdio.h>
#include <limits.h>

void main(){
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int total = 0;
    int i;
    int length = sizeof(ages) / sizeof(ages[0]);
    int lowestAge = INT_MAX;
    
    for(i = 0; i < length; i++){
        total += ages[i];

    }
    printf("Average age is: %.2f\n", (float)total / length);

    for (i = 0; i < length; i++){
        if (ages[i] < lowestAge){
            lowestAge = ages[i];
        }
    }
    printf("Lowest Age: %d\n", lowestAge);
}
