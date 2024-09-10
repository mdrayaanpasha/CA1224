/*=================================================
                    UDFCel2Fel.c
                    Rayaan Pasha
                    10-09-24
==================================================*/
#include <stdio.h>

// Prototype 
float C2F(float C);

// main function
int main() {
    printf("Celcius | Ferenhite\n");
    for(float C=0.0;C<=100.0;C+=10.0){
        printf("%f | %f \n",C,C2F(C));
    }
    return 0;
}

// function to convert cel to fel.
float C2F(float C) {
    return (9.0/5.0) * C + 32.0; 
}
