/******************************************************************************

                            AverageArr.c
                            Rayaan
                            16-07-24

*******************************************************************************/

#include<stdio.h>


int main(){
    int n,sum;
    float average;
    
    printf("this is a programme to find the average of the some numbers\n");
    
    printf("please insert the numbers you wnat to have: \n");
    scanf("%d",&n);
    
    int arr[n];
    printf("please keep inserting numbers: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    sum=0;
    
    for (int j=0;j<n;j++){
        sum+=arr[j];
    }
    
    
    average = (float)sum/n;
    
    printf("the average for %d numbers is: %f",n,average);
    return 0;
}
