/*-------------------------------------
            Rayaan Pasha
            OddSeries.c
            20-08-24
------------------------------------*/
#include <stdio.h>

int main() {
    int N,Sum,Term,i;
    
    printf("This Programme is to compute the sum of n series!\n Whats N?\n");
    scanf("%d",&N);
    i=Term=1;
    Sum=0;
    
    while(i<=N){
        
        if(i!=N){
            if(i % 2 != 0){
            printf("%d - ",Term); 
            Sum+=Term;
            }else{
                printf("%d + ",Term);
                Sum-=Term;
            }
        }else{
            printf("%d ",Term);
            if(i % 2 !=0){
                Sum+=Term;
            }else{
                Sum-=Term;
            }
        }
        
        i++;
        Term+=2;
        
        
    }
    printf("\nThe Sum is: %d",Sum);
    return 0;
}
