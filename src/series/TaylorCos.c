/*---------------------------------------------------------------
                Rayaan Pasha
                TaylorCos.c
                22-07-24
---------------------------------------------------------------*/

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
    printf("this is the code to compute the taylors series for cos function!\n");
    
    printf("what is the degree of cosine: \n");
    scanf("%d",&degree);
    
    radian = degree * M_PI / 180.0;
    
    
   term = 1.0;
   
   sum=1.0;
   n=1;
   
   while(fabs(term) >= 0.001){
       term  =  pow(-1,n) * pow(radian,2*n) / factorial(2*n);
       printf("Term %d is: %f\n",n,term);
       sum+=term;
       n++;
   }
   
   printf("Cosine Approximation is: %f\n",sum);
    
    
    return 0;
}
