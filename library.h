void std_details(char std_names[10][100],char s[10],int se[10],int roll[10],int i);

void isa1_entry(float isa1[10][3],int i);
void isa2_entry(float isa2[10][3],int i);
void esa_entry(float esa[10][3],int i);

void isa1_display(char std_names[10][100],char s[10],int se[10],int roll[10],float isa1[10][3],int c);
void isa2_display(char std_names[10][100],char s[10],int se[10],int roll[10],float isa2[10][3],int c);
void esa_display(char std_names[10][100],char s[10],int se[10],int roll[10],float esa[10][3],int c);
void grade_disp(char std_names[10][100],char s[10],int se[10],int roll[10],char* res,int c);

char* grade_calc(float isa1[10][3],float isa2[10][3],float esa[10][3],char grade[10],int c);

