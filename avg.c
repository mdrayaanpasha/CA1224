/*---------------------------------------
                
                avg.c
                Rayaan
                12-07-24
                
-----------------------------------*/

#include<stdio.h>

int main(){
    float x1,x2,x3,x4,x5,sum;
    float avg;
    printf("this is the code to find the average of sums \n");
    printf("Please insert 5 nums: \n");
    scanf("%f%f%f%f%f",&x1,&x2,&x3,&x4,&x5);

    sum=x1+x2+x3+x4+x5;
    avg = sum/5;
    printf("this is the average: %f",avg);
    return 0;
}
