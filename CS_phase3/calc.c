#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

void calc_grade(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        float total = 0.0;
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            total += (students[i].isa1[j] / 2.0) + (students[i].isa2[j] / 2.0) + (students[i].esa[j] / 2.0);
        }
        float average = total / (MAX_SUBJECTS * 50.0) * 100.0;

        if (average >= 90) students[i].grade = 'S';
        else if (average >= 80) students[i].grade = 'A';
        else if (average >= 70) students[i].grade = 'B';
        else if (average >= 60) students[i].grade = 'C';
        else if (average >= 50) students[i].grade = 'D';
        else if (average >= 45) students[i].grade = 'E';
        else students[i].grade = 'F';
    }
}