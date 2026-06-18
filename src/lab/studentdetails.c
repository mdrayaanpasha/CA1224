#include<stdio.h>
#include<stdlib.h>

//________struct_def:
typedef struct Student{
    int id, m1, m2, m3, total, result;
    float avg;
} STUDENT;

//__________function_prototype______
void inputDetails();
void printData();
void printMarks();
void menu(int *c);

//_________global_variables______
STUDENT S[20];


int main(){
    int *c = (int*)malloc(sizeof(int));
    menu(c);
    
    while(*c != 4){
        switch(*c){
            case 1:
                inputDetails();
                break;
            case 2:
                printData();
                break;
            case 3:
                printMarks();
                break;
            case 4:
                printf("-----See Ya! 👋----\n");
                exit(1);
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
        menu(c); // Update the menu after each choice
    }
    return 0;
}

//_____function_sub_programmes_____
void inputDetails(){
    printf("Enter The Data of 3 Students\n");
    for(int i = 0; i < 3; i++){
        printf("Enter ID for student %d: \n", i + 1);
        scanf("%d", &S[i].id);
        printf("Enter Marks in C for student %d: \n", i + 1);
        scanf("%d", &S[i].m1);
        printf("Enter Marks in Unix for student %d: \n", i + 1);
        scanf("%d", &S[i].m2);
        printf("Enter Marks in Math for student %d: \n", i + 1);
        scanf("%d", &S[i].m3);
        
        S[i].total = S[i].m1 + S[i].m2 + S[i].m3;
        S[i].avg = (float)S[i].total / 3;
        
        if (S[i].avg >= 85) {
            S[i].result = 1; // Grade A
        } else if (S[i].avg >= 65) {
            S[i].result = 2; // Grade B
        } else if (S[i].avg >= 45) {
            S[i].result = 3; // Grade C
        } else {
            S[i].result = 4; // Fail
        }
    }
}

void printData(){
    int id, found = 0;
    printf("\nEnter Student ID: \n");
    scanf("%d", &id);
    STUDENT ST;
    for(int i = 0; i < 3; i++){
        if(S[i].id == id){
            ST = S[i];
            found = 1;
            break;
        }
    }

    if(found){
        printf("STUDENT ID: %d\n", ST.id);
        printf("STUDENT Marks in C: %d\n", ST.m1);
        printf("STUDENT Marks in UNIX: %d\n", ST.m2);
        printf("STUDENT Marks in MATH: %d\n", ST.m3);
        printf("STUDENT TOTAL: %d\n", ST.total);
        printf("STUDENT AVG: %.2f\n", ST.avg);
        
        if(ST.result == 1){
            printf("STUDENT STATUS: A\n");
        } else if(ST.result == 2){
            printf("STUDENT STATUS: B\n");
        } else if(ST.result == 3){
            printf("STUDENT STATUS: C\n");
        } else {
            printf("STUDENT STATUS: F\n");
        }
    } else {
        printf("Student with ID %d not found!\n", id);
    }
}

void printMarks(){
    printf("DATA: \n");
    printf("-----SJU---------\n");

    for(int i = 0; i < 3; i++){
        printf("STUDENT ID: %d\n", S[i].id);
        printf("STUDENT Marks in C: %d\n", S[i].m1);
        printf("STUDENT Marks in UNIX: %d\n", S[i].m2);
        printf("STUDENT Marks in MATH: %d\n", S[i].m3);
        printf("STUDENT TOTAL: %d\n", S[i].total);
        printf("STUDENT AVG: %.2f \n", S[i].avg);
        
        if(S[i].result == 1){
            printf("STUDENT STATUS: A\n");
        } else if(S[i].result == 2){
            printf("STUDENT STATUS: B\n");
        } else if(S[i].result == 3){
            printf("STUDENT STATUS: C\n");
        } else {
            printf("STUDENT STATUS: F\n");
        }
    }
}

void menu(int *c){
    printf("WHAT DO YOU WANNA DO?\n");
    printf("PRESS 1 TO INPUT DATA\n");
    printf("PRESS 2 TO PRINT STUDENT DETAILS\n");
    printf("PRESS 3 TO PRINT STUDENT REPORT\n");
    printf("PRESS 4 TO QUIT!\n");
    scanf("%d", c);
}
