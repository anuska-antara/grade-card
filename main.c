#include <stdio.h>
#include <unistd.h>
#include "library.h"

int main()
{
    printf("\n\n*GRADE CALCULATOR*\n");
    int ch;
    char std_names[10][100];int i=-1,c=0;
    char section[10]; int sem[10]; int roll[10];
    float isa1[10][3], isa2[10][3], esa[10][3];
    char grade[10];
    int f=0, check_5=0;
    
    while(f==0){
        printf("Select option from below:\n1. Student entry\n2. ISA 1 marks of students\n3. ISA 2 marks of students\n4. ESA marks of students\n5. Calculate Grade\n6. Print Grade earned by all students\n7. Quit\n");
        printf("Your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1 : i++;
            printf("Fill the following details:-\n");
            std_details(std_names,section,sem,roll,i);

            printf("ISA 1 marks(Full marks-50):\n");
            isa1_entry(isa1,i);

            printf("ISA 2 marks(Full marks-50):\n");
            isa2_entry(isa2,i);

            printf("ESA marks(Full marks-100):\n");
            esa_entry(esa,i);

            c++;
            break;

            case 2: printf("MARKS OF STUDENTS IN ISA 1:\n");
            isa1_display(std_names,section,sem,roll,isa1,c);
            break;

            case 3:  printf("MARKS OF STUDENTS IN ISA 2:\n");
            isa2_display(std_names,section,sem,roll,isa2,c);
            break;

            case 4: printf("MARKS OF STUDENTS IN ESA:\n");
            esa_display(std_names,section,sem,roll,esa,c);
            break;

            case 5: printf("Calulating grade...\n");
            sleep(2);
            char* res=grade_calc(isa1,isa2,esa,grade,c);
            printf("Done\n");
            check_5=1;
            break;

            case 6: if(check_5==0){
                printf("You have not calculated grade yet.\n Please select option 5 to calculate grade.");
                break;
            }
            else{
                printf("*WELCOME TO GRADECARD*\n\n");
                grade_disp(std_names,section,sem,roll,res,c);
                break;
            }

            case 7: f=1;
            printf("THANK YOU\n");
            break;
            default: printf("\nSORRY, INVALILD CHOICE!!!\n\n");
            break;
        }
    }
}