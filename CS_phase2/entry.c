#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void marks_entry(float *marks, int count){
    for (int j = 0; j < 3; j++) {
        if (j == 0) printf("Maths: ");
        else if (j == 1) printf("Physics: ");
        else printf("Computer: ");
        scanf("%f", &marks[j]);
    }
}