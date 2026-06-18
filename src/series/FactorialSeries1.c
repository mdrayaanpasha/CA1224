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
    sum=0;
    while (i <= n){
       
        term = term * (i * (i + 1));
        if(i!=n){
            printf("(%d! * %d!) + ",i,i+1);
        }else{
            printf("(%d! * %d!)",i,i+1);
        }
        
        sum+=term;
        i++;
        
    }
    printf(" = %d",sum);


    return 0;
}
