/***************************************************************                     
                        AreaNotCovered.c
                        Rayaan Pasha
                        22-07-24

**************************************************************/
#include<stdio.h>




int main()
{
    int A,R;
    float SquareArea, CircleArea,Ans;
    
    
    printf("this is a programme to Compute The Area not Covered by circle inside the square! \n");
    
    printf("what is the lenght of side of square? \n");
    scanf("%d",&A);
    
    printf("what is the radius of circle? \n");
    scanf("%d",&R);
    
    SquareArea = (float) A * (float) A;
    CircleArea = 3.14 * (float) R * (float) R;
    
    Ans= SquareArea - CircleArea;
    
    printf("The Area that is not covered by the circle is: %0.2f",Ans);
    
   

    return 0;
}
