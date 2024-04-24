#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char grade_calc(float *isa1_marks, float *isa2_marks, float *esa_marks) {
    float total_marks = 0.0;
    for (int j = 0; j < 3; j++) {
        total_marks += (isa1_marks[j] + isa2_marks[j] + esa_marks[j]) / 6.0;
    }
    if (total_marks >= 90) return 'S';
    else if (total_marks >= 80) return 'A';
    else if (total_marks >= 70) return 'B';
    else if (total_marks >= 60) return 'C';
    else if (total_marks >= 50) return 'D';
    else if (total_marks >= 45) return 'E';
    else return 'F';
}