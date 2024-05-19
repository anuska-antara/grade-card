#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

void write_student_to_csv(Student *student) {
    FILE *file = fopen(CSV_FILE, "a");
    if (file == NULL) {
        perror("Could not open file");
        return;
    }
    fprintf(file, "%s,%s,%c,%d,%d", student->name, student->srn, student->sec, student->sem, student->roll);
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        fprintf(file, ",%.2f", student->isa1[j]);
    }
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        fprintf(file, ",%.2f", student->isa2[j]);
    }
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        fprintf(file, ",%.2f", student->esa[j]);
    }
    fprintf(file, ",%c\n", student->grade);
    fclose(file);
}

void read_std(Student students[], int *count) {
    FILE *file = fopen(CSV_FILE, "r");
    if (file == NULL) {
        perror("Could not open file");
        return;
    }
    char line[512];
    *count = 0;
    while (fgets(line, sizeof(line), file) && *count < MAX_STUDENTS) {
        Student *student = &students[*count];
        sscanf(line, "%99[^,],%13[^,],%c,%d,%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%c",
               student->name, student->srn, &student->sec, &student->sem, &student->roll,
               &student->isa1[0], &student->isa1[1], &student->isa1[2],
               &student->isa2[0], &student->isa2[1], &student->isa2[2],
               &student->esa[0], &student->esa[1], &student->esa[2],
               &student->grade);
        (*count)++;
    }
    fclose(file);
}

void update_grade(Student students[], int count) {
    FILE *file = fopen(CSV_FILE, "w");
    if (file == NULL) {
        perror("Could not open file");
        return;
    }
    for (int i = 0; i < count; i++) {
        Student *student = &students[i];
        fprintf(file, "%s,%s,%c,%d,%d", student->name, student->srn, student->sec, student->sem, student->roll);
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            fprintf(file, ",%.2f", student->isa1[j]);
        }
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            fprintf(file, ",%.2f", student->isa2[j]);
        }
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            fprintf(file, ",%.2f", student->esa[j]);
        }
        fprintf(file, ",%c\n", student->grade);
    }
    fclose(file);
}

void clear_csv_file() {
    FILE *file = fopen(CSV_FILE, "w");
    if (file != NULL) {
        fclose(file);
    }
}