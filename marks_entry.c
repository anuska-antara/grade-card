#include <stdio.h>
#include <unistd.h>

void isa1_entry(float isa1[10][3],int i){
    for (int j = 0; j < 3; j++) {
        if(j==0)printf("Maths: ");
        else if(j==1)printf("Physics: ");
        else printf("Computer: ");
        scanf("%f", &isa1[i][j]);
    }
}

void isa2_entry(float isa2[10][3],int i){
    for (int j = 0; j < 3; j++) {
        if(j==0)printf("Maths: ");
        else if(j==1)printf("Physics: ");
        else printf("Computer: ");
        scanf("%f", &isa2[i][j]);
    }
}

void esa_entry(float esa[10][3],int i){
    for (int j = 0; j < 3; j++) {
        if(j==0)printf("Maths: ");
        else if(j==1)printf("Physics: ");
        else printf("Computer: ");
        scanf("%f", &esa[i][j]);
    }
} 