#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    printf("\n****GRADE CARD GENERATOR****\n");

    while (1) {
        printf("\n");
        printf("1. Add Student and Marks\n");
        printf("2. Calculate Grades\n");
        printf("3. Print Grade Card\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    std_details(&students[count]);
                    count++;
                } else {
                    printf("Maximum number of students reached.\n");
                }
                break;
            case 2:
                read_std(students, &count);
                calc_grade(students, count);
                update_grade(students, count);
                printf("Grades calculated and updated successfully.\n");
                break;
            case 3:
                read_std(students, &count);
                print_gradecard(students, count);
                break;
            case 4:
                clear_csv_file();
                printf("Exiting...\n");
                printf("Thank you\n");
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}