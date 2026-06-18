/*___________________________________________________________
                    5div.c
                    Rayaan
                    19-07-24
___________________________________________________________*/
#include <stdio.h>

int main() {
    
    int N,R,C;
    
    printf("Programme to commpute if number is even or not!\n what is the num you want to have: \n");
    scanf("%d",&N);
    
    
    R=N%5;
    C=5-R;
    
    if(R!=0){
        printf("The next number is: %d\n",N+C);
    }else{
        printf("its divisible");
    }
    
    

    return 0;
}
