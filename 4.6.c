#include <stdio.h>
#include <stdlib.h>

int main() {
    int numStudents;
    int *scores;
    FILE *fptr;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    scores = (int *)malloc(numStudents * sizeof(int));

    for (int i = 0; i < numStudents; i++) {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    fptr = fopen("scores.txt", "w");

    for (int i = numStudents - 1; i >= 0; i--) {
        fprintf(fptr, "%d\n", scores[i]);
    }

    free(scores);
    fclose(fptr);

    return 0;
}
