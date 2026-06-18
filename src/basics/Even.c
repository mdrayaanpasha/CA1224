/*___________________________________________________________
                    Even.c
                    Rayaan
                    19-07-24
___________________________________________________________*/
#include <stdio.h>

int main() {
    
    int A,R;
    
    printf("Programme to commpute if number is even or not!\n what is the num you want to have: \n");
    scanf("%d",&A);
    
    
    R=A%2;
    
    if(R==0){
        printf("Its even!\n");
    }else{
        printf("Its odd\n");
    }

    return 0;
}
