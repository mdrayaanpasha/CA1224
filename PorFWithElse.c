/*__________________________________________________________    
            PorFWithElse.c
            rayaan
            30-07-24
__________________________________________________________*/

#include<stdio.h>


int main(){
    int m1,m2,m3,avg,sum;
    char name[10],RegNo[10];
    
    printf("Whats your name & Reg no? \n");
    scanf("%s%s",&name,&RegNo);
    
    printf("Enter Marks in 3 subjects: \n");
    scanf("%d%d%d",&m1,&m2,&m3);
    
    sum=m1+m2+m3;
    
    avg= sum/3;
    printf("------------------------------------------------\nSt.Joseph's University\n Marks Card");
    printf("Regno: %s \n Name: %s\n Physics: %d \n Math: %d \n Computer Science: %d \n Total: %d \n ",RegNo,name,m1,m2,m3,sum);
    if(avg >=35 && m1>=35 && m2>= 35 && m3>=35){
        if(avg>=80){
            printf(" Distinction!");
        }else if(avg >=60){
            printf(" first Class!");
        }else if(avg>=50){
            printf(" Second Class");
        }else{
            printf(" Pass");
        }
    }else{
        printf(" Failed!"); 
    }
    printf(" \n-----------------------------------------------");
    return 0;
}
