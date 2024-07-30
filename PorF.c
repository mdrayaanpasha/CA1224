/*__________________________________________________________    
            PorF.c
            rayaan
            30-07-24
__________________________________________________________*/

#include<stdio.h>


int main(){
    int m1,m2,m3,avg,sum;
    char name[10];
    
    printf("Whats your name? \n");
    scanf("%s",&name);
    
    printf("Enter Your marks in 3 subjects: \n");
    scanf("%d%d%d",&m1,&m2,&m3);
    
    sum=m1+m2+m3;
    
    avg= sum/3;
    
    if(avg < 40){
        printf("%s you got %d that implies your failed!\n",name,sum);
    }else{
        printf("%s you got %d that implies your passed!\n",name,sum);
    }
    return 0;
}
