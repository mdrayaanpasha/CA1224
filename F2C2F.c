/*_____________________________________________
                F2C2F.c
                Rayaan
                27-Aug-24
_____________________________________________*/

#include<stdio.h>
int main(){
    float F,C;
    C=0.0;
    printf("Celcius | Farenhit\n");
    while(C <=100){
        F=(9.0/5.0) * C + 32.0;
        printf("%0.2f | %0.2f\n",C,F);
        C+=5.0;
        
    }
    
    
    
    F=32.0;
     printf("Farenhit | Celcius\n");
    while(F <=212.0){
        C=((F-32.0)/9.0) * 5.0;
        printf("%.3f |  %.3f\n",F,C);
        F+=10.0;
        
    }
    return 0;
}
