/*=================================================
                    AreaCircle.c
                    Rayaan Pasha
                    10-09-24
==================================================*/
#include <stdio.h>

// Prototype 
float AreaCircle(int r);

// Main function
int main() {
    int r;
    printf("What's the radius of the circle?\n");
    scanf("%d", &r);
    printf("%f is the area of the circle.\n", AreaCircle(r)); 
    return 0;
}

// function to calculate area of a circle
float AreaCircle(int r) {
    return 3.14 * (float)r * (float)r; 
}
