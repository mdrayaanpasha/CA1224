/*=============================================================================
                            FactorialSeries1.c
                            Rayaan Pasha
                            26-08-24
=============================================================================*/
#include <stdio.h>

int main() {
    int i,n,term,sum;
    printf("whats n?\n");
    scanf("%d",&n);
    i=1;
    term=1;
    
    while (i <= n){
        sum+=term*(term*term+1);
        if(i!=n){
            printf("%d!*%d! + ",term,term+1);
        }else{
            printf("%d!*%d!",term,term+1);
        }
        term++;
        i++;
        
    }
    printf(" = %d",sum);


    return 0;
}
