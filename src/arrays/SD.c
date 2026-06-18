/******************************************************************************
 * 
 * 
 *                          SD.c
                            Rayaan Pasha
                            16-07-24

*******************************************************************************/
#include<stdio.h>
#include<math.h>



int main(){
    int n,sum;
    float avg,numerator,sdn,sd;
    
    printf("this is a programme to Get Some Elements & then print them\n");
    
    printf("How many numbers do you want to have?: \n");
    scanf("%d",&n);
    
    int arr[n];
    printf("please keep inserting numbers: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    
    sum=0;
    
    for(int k=0;k<n;k++){
        sum+=arr[k];
    }
    
    avg = (float)sum/n;
    
    numerator  = 0;
    
    for(int j=0;j<n;j++){
        numerator+=pow(arr[j]-avg,2);
    }
    
    
    sdn=numerator/n;
    sd = sqrt(sdn);
    
    printf("the standard deviation for %d numbers is: %f\n",n,sd);
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    return 0;
}
