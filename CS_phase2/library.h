#ifndef LIBRARY_H
#define LIBRARY_H

typedef struct {
    char name[100];
    char section;
    int semester;
    int roll_number;
    float isa1_marks[3];
    float isa2_marks[3];
    float esa_marks[3];
    char grade;
} Student;

void std_details(Student *std, int i);
void marks_entry(float *marks, int count);
void display_1(Student *std, int count);
void display_2(Student *std, int count);
void display_3(Student *std, int count);
void grade_display(Student *std, char *grades, int count);
char grade_calc(float *isa1_marks, float *isa2_marks, float *esa_marks);

#endif /* LIBRARY_H */
