#include <stdio.h>
#include <unistd.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void std_details(char std_names[10][100],char s[10],int se[10],int roll[10],int i){
    printf("Enter student's name: ");
    clearInputBuffer();
    scanf("%99[^\n]", std_names[i]);
    clearInputBuffer();

    printf("Section: ");
    scanf(" %c",&s[i]);

    printf("Semester: ");
    scanf(" %d",&se[i]);

    printf("Roll number: ");
    scanf(" %d",&roll[i]);

    
}