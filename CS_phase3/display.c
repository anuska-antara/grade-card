#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

void print_gradecard(Student students[], int count) {
    printf("%-10s %-20s %-20s %-8s %-10s %s\n", "Roll No.", "Name", "SRN", "Section", "Sem", "Grade");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-20s %-20s %-8c %-10d %c\n",
               students[i].roll,
               students[i].name,
               students[i].srn,
               students[i].sec,
               students[i].sem,
               students[i].grade);
    }
}