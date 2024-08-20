/*-------------------------------------
            Rayaan Pasha
            factorial.c
            20-08-24
------------------------------------*/

#include <stdio.h>

int main() {
    int N,i;
    double fact;
    
    printf("This Programme is to compute the factorial!\n Whats N?\n");
    scanf("%d",&N);
    i=1;
    fact=1.0;
    
    while(i<=N){
        
        if(i!=N){
           printf("%d * ",i);
        }else{
           printf("%d ",i);
        }
        fact*=i;
        i++;
        
        
        
    }
    printf("\nThe Factorial is: %f",fact);
    return 0;
}
