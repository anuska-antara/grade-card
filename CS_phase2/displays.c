#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "library.h"

void display_1(Student *std, int count) { //char *subject
    //printf("Marks of students in %s:\n", subject);
    printf("%-10s %-20s %-8s %-10s %s\n", "Roll No.", "Name", "Section", "Semester", "Total Marks");
    for (int k = 0; k < count; ++k) {
        float total_marks = 0.0;
        for (int j = 0; j < 3; ++j) {
            total_marks += std[k].isa1_marks[j];
        }
        printf("%-10d %-20s %-8c %-10d %.2f\n", std[k].roll_number, std[k].name, std[k].section, std[k].semester, total_marks);
    }
    printf("\n");
}

void display_2(Student *std, int count) { //char *subject
    //printf("Marks of students in %s:\n", subject);
    printf("%-10s %-20s %-8s %-10s %s\n", "Roll No.", "Name", "Section", "Semester", "Total Marks");
    for (int k = 0; k < count; ++k) {
        float total_marks = 0.0;
        for (int j = 0; j < 3; ++j) {
            total_marks += std[k].isa2_marks[j];
        }
        printf("%-10d %-20s %-8c %-10d %.2f\n", std[k].roll_number, std[k].name, std[k].section, std[k].semester, total_marks);
    }
    printf("\n");
}

void display_3(Student *std, int count) { //char *subject
    //printf("Marks of students in %s:\n", subject);
    printf("%-10s %-20s %-8s %-10s %s\n", "Roll No.", "Name", "Section", "Semester", "Total Marks");
    for (int k = 0; k < count; ++k) {
        float total_marks = 0.0;
        for (int j = 0; j < 3; ++j) {
            total_marks += std[k].esa_marks[j];
        }
        printf("%-10d %-20s %-8c %-10d %.2f\n", std[k].roll_number, std[k].name, std[k].section, std[k].semester, total_marks);
    }
    printf("\n");
}

void grade_display(Student *std, char *grades, int count) {
    printf("%-10s %-20s %-8s %-10s %s\n", "Roll No.", "Name", "Section", "Semester", "Grade");
    for (int k = 0; k < count; ++k) {
        printf("%-10d %-20s %-8c %-10d %c\n", std[k].roll_number, std[k].name, std[k].section, std[k].semester, grades[k]);
    }
    printf("\n");
}