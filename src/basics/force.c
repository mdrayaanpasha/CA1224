/* -----------------------------
Force.C
rayaan
10/07/24
----------------------------- */

#include <stdio.h>

int main() {
    printf("the following is a programme to compute force based on mass and acceralation.\n");
    int f,m,a;
    
    printf("just keep inserting m & a: \n");
    scanf("%d%d",&m,&a);
    f=m*a;
    
    printf("this is force: %d",f);
    

    
    return 0;
}
