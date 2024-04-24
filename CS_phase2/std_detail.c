#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "library.h"

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


void std_details(Student *std, int i){
    printf("Enter student's name: ");
    clearInputBuffer();
    scanf("%99[^\n]", std[i].name);
    clearInputBuffer();

    printf("Section: ");
    scanf(" %c", &std[i].section);

    printf("Semester: ");
    scanf(" %d", &std[i].semester);

    printf("Roll number: ");
    scanf(" %d", &std[i].roll_number);
}
