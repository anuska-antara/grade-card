#include <stdio.h>
#include <unistd.h>

void isa1_display(char std_names[10][100],char s[10],int se[10],int roll[10],float isa1[10][3],int c){
    printf("%s \t%-20s\t%s \t%s\t%s\t", "Roll No.", "Name", "Section", "Semester", "Total Marks in ISA 1");
    printf("\n");
    for (int k = 0; k < c; ++k) {
        float total_marks_exam1 = 0.0;
        for (int j = 0; j < 3; ++j) {
            total_marks_exam1 += isa1[k][j];
        }
        printf(" %d\t\t%-20s\t%c \t\t%d \t", roll[k], std_names[k], s[k], se[k]);
        printf("\t%.2f\n", total_marks_exam1);
        printf("\n");
    }
}

void isa2_display(char std_names[10][100],char s[10],int se[10],int roll[10],float isa2[10][3],int c){
    printf("%s \t%-20s\t%s \t%s\t%s\t", "Roll No.", "Name", "Section", "Semester", "Total Marks in ISA 2");
    printf("\n");
    for (int k = 0; k < c; ++k) {
        float total_marks_exam2 = 0.0;
        for (int j = 0; j < 3; ++j) {
            total_marks_exam2 += isa2[k][j];
        }
        printf(" %d\t\t%-20s\t%c \t\t%d \t", roll[k], std_names[k], s[k], se[k]);
        printf("\t%.2f\n", total_marks_exam2);
        printf("\n");
    }
}

void esa_display(char std_names[10][100],char s[10],int se[10],int roll[10],float esa[10][3],int c){
    printf("%s \t%-20s\t%s \t%s\t%s\t", "Roll No.", "Name", "Section", "Semester", "Total Marks in ESA");
    printf("\n");
    for (int k = 0; k < c; ++k) {
        float total_marks_exam = 0.0;
        for (int j = 0; j < 3; ++j) {
            total_marks_exam += esa[k][j];
        }
        printf(" %d\t\t%-20s\t%c \t\t%d \t", roll[k], std_names[k], s[k], se[k]);
        printf("\t%.2f\n", total_marks_exam);
        printf("\n");
    }
}

void grade_disp(char std_names[10][100],char s[10],int se[10],int roll[10],char* res,int c){
    printf("%s \t%-20s\t%s \t%s\t%s\t", "Roll No.", "Name", "Section", "Semester", "Grade");
    printf("\n");
     for (int k = 0; k < c; ++k) {
    //     float total_marks_exam = 0.0;
    //     for (int j = 0; j < 3; ++j) {
    //         total_marks_exam += esa[k][j];
    //     }
        printf(" %d\t\t%-20s\t%c \t\t%d \t", roll[k], std_names[k], s[k], se[k]);
        printf("\t%c\n", res[k]);
        printf("\n");
    }
}