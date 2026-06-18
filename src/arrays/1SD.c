/*============================================================================
                    1SD.c
                    Rayaan Pasha
                    16-07-24
============================================================================*/
#include <stdio.h>
#include <math.h>


int main() {
    
    int n,sum,sumSquared;
    float t1,t2,sdn,sd;
    
    printf("This is a programme to compute the standard deviation!\n");
    printf("How many numbers do you wanna have? \n");
    
   scanf("%d",&n);
   
   printf("Please keep inserting \n");
   
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   sum=sumSquared=0;
   
   for(int i=0;i<n;i++){
       sum+=arr[i];
       sumSquared+=pow(arr[i],2);
   }
   
   t1=(float) sumSquared/n;
   t2=(float) sum/n;
   t2=pow(t2,2);
   
   sdn=t1-t2;
   
   sd=sqrt(sdn);
   printf("This is the answer: %f\n",sd);
   
   
   
   
   

    return 0;
}
