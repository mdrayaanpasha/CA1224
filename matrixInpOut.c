/*----------------------------------------------------------------
                    Rayaan
                    Matrix.c
                    26-07-24
---------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int m,n,i,j;
    
    printf("This is a programme to input and output in a matrix!\n How many rows and cols do you want? \n");
    scanf("%d%d",&m,&n);
    
    
    printf("Enter Data in your matrix\n");
    int arr[m][n];
  
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter Data at: %d %d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Data at: %d %d: %d \n",i,j,arr[i][j]);
           
        }
    }
    
    

    return 0;
}
