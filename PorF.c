/*__________________________________________________________    
            PorF.c
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
    if(avg < 40){
        printf("Regno: %s \n Name: %s\n Physics: %d \n Math: %d \n Computer Science: %d \n Total: %d \n Result: Failed!",RegNo,name,m1,m2,m3,sum);
    }else{
         printf("\n Regno: %s \n Name: %s\n Physics: %d \n Math: %d \n Computer Science: %d \n Total: %d \n Result: PASSED! ",RegNo,name,m1,m2,m3,sum);
    }
    printf(" \n-----------------------------------------------");
    return 0;
}
