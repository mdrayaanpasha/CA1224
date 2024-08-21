#include<stdio.h>
#include<string.h>

typedef struct Employee {
    char name[20];
    int id;
    int DA;
    int HRA;
    int GP;
    int NP;
} Employee;

int main() {
    Employee Employees[20];
    
    for (int i = 0; i < 20; i++) {  
        sprintf(Employees[i].name, "Employee%d", i);
        Employees[i].id = i;
        Employees[i].DA = 100 * i;
        Employees[i].HRA = 200 * i;
        Employees[i].GP = 5000 * i + Employees[i].DA + Employees[i].HRA;
        
        if (Employees[i].GP <= 10000) {
            Employees[i].NP = Employees[i].GP + 5000;
        } else if (Employees[i].GP > 10000 && Employees[i].GP <= 25000) {
            Employees[i].NP = Employees[i].GP - (Employees[i].GP * 8 / 100); 
        } else {
            Employees[i].NP = Employees[i].GP - (Employees[i].GP * 10 / 100);
        }
        
        printf("-------------------------\n");
        printf("Name: %s\n", Employees[i].name);
        printf("Id: %d\n", Employees[i].id);
        printf("Gross Pay: %d\n", Employees[i].GP);
        printf("Net Pay: %d\n", Employees[i].NP);
    }
    
    return 0;
}
