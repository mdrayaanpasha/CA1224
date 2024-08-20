/*-------------------------------------
            Rayaan Pasha
            factorial.c
            20-08-24
------------------------------------*/

#include <stdio.h>

int main() {
    int N,fact,i;
    
    printf("This Programme is to compute the factorial!\n Whats N?\n");
    scanf("%d",&N);
    i=fact=1;
    
    while(i<=N){
        
        if(i!=N){
           printf("%d * ",i);
        }else{
           printf("%d ",i);
        }
        fact*=i;
        i++;
        
        
        
    }
    printf("\nThe Factorial is: %d",fact);
    return 0;
}
