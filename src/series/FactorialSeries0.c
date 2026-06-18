/*=============================================================================
                            FactorialSeries0.c
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
    sum=0;
    
    while (i <= n){
        sum+=term;
        term+=((2*i)*(2*i+1));
    
        i++;
        
    }
    printf(" = %d",sum);


    return 0;
}
