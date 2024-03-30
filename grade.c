#include <stdio.h>
#include <unistd.h>

char* grade_calc(float isa1[10][3],float isa2[10][3],float esa[10][3],char grade[10],int c){
    float total_marks_exam1[10][3];
    float total_marks_exam2[10][3];
    float total_marks_exam[10][3];
    float total[10];
    float (*ti1)[3]= total_marks_exam1;
    float (*ti2)[3]=total_marks_exam2;
    float (*ti)[3]=total_marks_exam;
    float* t=total;
    for(int k=0;k<c;k++){
        t[k]=0.0;
        for(int j=0;j<3;j++){
            ti1[k][j]=0.0;
            ti2[k][j]=0.0;
            ti[k][j]=0.0;
        }
    }
    for(int k=0;k<c;k++){
        for (int j = 0; j < 3; ++j) {
            ti1[k][j] += ((isa1[k][j])/2.0);
        }
        
        float total_marks_exam2 = 0.0;
        for (int j = 0; j < 3; ++j) {
            ti2[k][j] += ((isa2[k][j])/2.0);
        }
        
        float total_marks_exam = 0.0;
        for (int j = 0; j < 3; ++j) {
            ti[k][j] += ((esa[k][j])/2.0);
        }

        float tot=0.0;
        for(int j=0;j<3;j++){
            tot += ((ti1[k][j] + ti2[k][j] + ti[k][j])/3.0);
        }
        t[k]+=tot;
    }
    for(int k=0;k<c;k++){
        if(t[k]>=90)grade[k]='S';
            else if(t[k]>=80)grade[k]='A';
            else if(t[k]>=70)grade[k]='B';
            else if(t[k]>=60)grade[k]='C';
            else if(t[k]>=50)grade[k]='D';
            else if(t[k]>=45)grade[k]='E';
            else grade[k]='F';
    }

    return grade;
}
