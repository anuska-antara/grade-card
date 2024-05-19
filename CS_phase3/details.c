#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void std_details(Student *student) {
    printf("Enter student's name: ");
    clearInputBuffer();
    scanf("%99[^\n]", student->name);
    clearInputBuffer();

    printf("Enter SRN: ");
    scanf("%13s", student->srn);
    clearInputBuffer();

    printf("Section: ");
    scanf(" %c", &student->sec);

    printf("Sem: ");
    scanf("%d", &student->sem);

    printf("Roll number: ");
    scanf("%d", &student->roll);

    printf("ISA 1 marks (Full marks - 50):\n");
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        if (j == 0) printf("Maths: ");
        else if (j == 1) printf("Physics: ");
        else printf("Computer: ");
        scanf("%f", &student->isa1[j]);
    }

    printf("ISA 2 marks (Full marks - 50):\n");
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        if (j == 0) printf("Maths: ");
        else if (j == 1) printf("Physics: ");
        else printf("Computer: ");
        scanf("%f", &student->isa2[j]);
    }

    printf("ESA marks (Full marks - 100):\n");
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        if (j == 0) printf("Maths: ");
        else if (j == 1) printf("Physics: ");
        else printf("Computer: ");
        scanf("%f", &student->esa[j]);
    }

    student->grade = ' '; 
    write_student_to_csv(student);
}