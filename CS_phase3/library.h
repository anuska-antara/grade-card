#ifndef LIBRARY_H
#define LIBRARY_H

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 100
#define MAX_SRN_LENGTH 14
#define MAX_SUBJECTS 3
#define CSV_FILE "students.csv"

typedef struct {
    char name[MAX_NAME_LENGTH];
    char srn[MAX_SRN_LENGTH];
    char sec;
    int sem;
    int roll;
    float isa1[MAX_SUBJECTS];
    float isa2[MAX_SUBJECTS];
    float esa[MAX_SUBJECTS];
    char grade;
} Student;

void clearInputBuffer();
void write_student_to_csv(Student *student);
void std_details(Student *student);
void read_std(Student students[], int *count);
void update_grade(Student students[], int count);
void calc_grade(Student students[], int count);
void print_gradecard(Student students[], int count);
void clear_csv_file();

#endif // LIBRARY_H 