/***************************************************************                    
                        TriangleArea.c
                        Rayaan Pasha
                        16-07-24

**************************************************************/
#include<stdio.h>
#include<math.h>



int main()
{
    int A,B,C;
    float S, Area;
    
    
    printf("this is a programme to Compute The Area Of Triangle! \n");
    
    A=3;
    B=4;
    C=5;
    
   S=A+B+C;
   S=(float)S/2;
  
   Area=S*(S-A)*(S-B)*(S-C);
   Area=sqrt(Area);
   
   printf("The Area Of Triangle With Lenght %d %d %d is: %0.2f\n",A,B,C,Area);
   
    



    
    
    return 0;
}
