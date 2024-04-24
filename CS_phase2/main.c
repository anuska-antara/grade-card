#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "library.h"


int main() {
    printf("\n\n*GRADE CALCULATOR*\n");
    int choice;
    int student_count = 0; int i=0, c_5=0,f=0;
    Student *students = NULL;
    char *grades = NULL;

    while (f==0) {
        printf("Select option from below:\n");
        printf("1. Student entry\n");
        printf("2. ISA 1 marks of students\n");
        printf("3. ISA 2 marks of students\n");
        printf("4. ESA marks of students\n");
        printf("5. Calculate Grade\n");
        printf("6. Print Grade earned by all students\n");
        printf("7. Quit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                student_count++;
                students = realloc(students, student_count * sizeof(Student));
                std_details(students, student_count - 1);

                printf("Enter ISA 1 marks for %s\n", students[i].name);
                marks_entry(students[i].isa1_marks, 3);

                printf("Enter ISA 2 marks for %s\n", students[i].name);
                marks_entry(students[i].isa2_marks, 3);

                printf("Enter ESA marks for %s\n", students[i].name);
                marks_entry(students[i].esa_marks, 3);

                i++;
                break;

            case 2:printf("MARKS OF STUDENTS IN ISA 1:\n");
            display_1(students, student_count);
            break;

            case 3:printf("MARKS OF STUDENTS IN ISA 2:\n");
            display_2(students,student_count);
            break;
            
            case 4:printf("MARKS OF STUDENTS IN ESA:\n");
            display_3(students,student_count);
            break;
            
            case 5:
                grades = malloc(student_count * sizeof(char));
                for (int i = 0; i < student_count; i++) {
                    grades[i] = grade_calc(students[i].isa1_marks, students[i].isa2_marks, students[i].esa_marks);
                }
                printf("\nCalculating GRADE...\n");
                sleep(2);
                printf("Grades calculated.\n\n");
                c_5=1;
                break;

            case 6:if(c_5==0){
                printf("Please calculate Grades first!\n");
                break;
            }
            else{
                printf("WELCOME TO GRADECARD\n\n");
                grade_display(students, grades, student_count);
                break;
            }

            case 7:f=1;
                printf("THANK YOU!!!\n");
                free(grades);
                for (int i = 0; i < student_count; i++) {
                    free(students[i].isa1_marks);
                    free(students[i].isa2_marks);
                    free(students[i].esa_marks);
                }
                free(students);
                break;

            default:
                printf("\nINVALID CHOICE!!! \n Please enter a number between 1 and 7.\n");
                break;
        }
    }

    return 0;
}