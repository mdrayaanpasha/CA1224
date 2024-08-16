/*_______________________________________________
                Trace.c
                Rayaan Pasha
                16-aug-24
_______________________________________________*/

#include<stdio.h>

int main(){
    int Trace,i,N,j;
    printf("whats N?\n");
    scanf("%d",&N);
    int Arr[N][N];
    printf("Enter All Nums in matrix\n");
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            scanf("%d",&Arr[i][j]);
        }
    }
    Trace=0;
    for(i=1;i<=N;i++){
        Trace+=Arr[i][i];
        
       
    }
    
    printf("Trace is: %d",Trace);
    return 0;
}
