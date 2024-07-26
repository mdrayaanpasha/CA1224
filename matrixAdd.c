/*----------------------------------------------------------------
                    Rayaan
                    MatrixAdd.c
                    26-07-24
---------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int m,n,i,j;
    
    printf("This is a programme to input and output in a matrix!\n How many rows and cols do you want? \n");
    scanf("%d%d",&m,&n);
    
    int A[m][n], B[m][n], C[m][n];
    printf("Enter Data in your matrix A: \n");
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter Data at: %d %d: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Enter Data in your matrix B: \n");
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
              printf("Enter Data at: %d %d: ",i,j);
            scanf("%d",&B[i][j]);
           
        }
    }
    
    printf("A + B =  \n");
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
              C[i][j]=A[i][j]+B[i][j];
              printf("A[%d][%d] + B[%d][%d] = %d \n",i,j,i,j,C[i][j]);
           
        }
    }
    
    

    return 0;
}
