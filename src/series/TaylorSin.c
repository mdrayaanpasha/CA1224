/*_________________________________________________________________________________
                      TaylorSin.c
                      Rayaan Pasha
                      22-07-24
_________________________________________________________________________________*/
#include<stdio.h>
#include<math.h>


int factorial(int num){
    if (num <= 1){
        return 1;
    }else{
        return num * factorial(num-1);
    }
}

int main(){
    int degree,n;
    float radian,term,sum;
    printf("this is the code to compute the taylors series for Sin function!\n");
    
    printf("what is the degree of sin: \n");
    scanf("%d",&degree);
    
    radian = degree * M_PI / 180.0;
    
    
   term = sum = radian;
   n=1;
   
   while(fabs(term) >= 0.001){
       term  =  pow(-1,n) * pow(radian,2*n+1) / factorial(2*n+1);
       printf("Term %d is: %f\n",n,term);
       sum+=term;
       n++;
   }
   
   printf("Sin Approximation is: %f\n",sum);
    
    
    return 0;
}
