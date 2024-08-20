/*-------------------------------------
            Rayaan Pasha
            SumSeries.c
            20-08-24
----------------------------------------*/
#include <stdio.h>

int main() {
    int N,Sum,Term,i;
    
    printf("This Programme is to compute the sum of n series!\n Whats N?\n");
    scanf("%d",&N);
    i=Term=1;
    Sum=0;
    
    while(i<=N){
        Sum+=Term;
        if(i!=N){
            printf("%d + ",Term); 
        }else{
            printf("%d ",Term);
        }
        
        i++;
        Term++;
        
    }
    printf("\nThe Sum is: %d",Sum);
    return 0;
}
