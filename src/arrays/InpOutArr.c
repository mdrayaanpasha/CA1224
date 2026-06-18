/******************************************************************************

                            InpOutArr.c
                            Rayaan Pasha
                            16-07-24

*******************************************************************************/

#include<stdio.h>


int main(){
    int n;
    printf("this is a programme to Get Some Elements & then print them\n");
    
    printf("How many numbers do you want to have?: \n");
    scanf("%d",&n);
    
    int arr[n];
    printf("please keep inserting numbers: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    
    printf("the numbers you inserted are: \n");
    
    for(int j=0;j<n;j++){
        printf("%d\n",arr[j]);
    }
    
    
   
    
    
    return 0;
}
