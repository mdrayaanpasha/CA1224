/*
                MatMax.c
                Rayaan Pasha
                16-aug-24
________________________________________*/

#include<stdio.h>

int main(){
    int Max,row,col,i,M,N,j;
    printf("whats N & M?\n");
    scanf("%d%d",&M,&N);
    int Arr[N][N];
    printf("Enter All Nums in matrix\n");
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            scanf("%d",&Arr[i][j]);
        }
    }
    
    Max=Arr[1][1];
    row=col=1;
    for(i=1;i<=M;i++){
       for(j=1;j<=N;j++){
           if(Arr[i][j] > Max){
               Max=Arr[i][j];
               row=i;
               col=j;
           }
       }
    }
    
    printf("Your Matrix has max num %d at row %d col %d: ",Max,M,N);
   

    return 0;
}
