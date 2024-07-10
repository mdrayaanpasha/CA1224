/* -----------------------------
displacement.C
rayaan
10/07/24
----------------------------- */

#include <stdio.h>

int main() {
    printf("the following is a programme to compute displacement \n");
    float u,t,a,s;
    
    printf("just keep inserting u,t,a: \n");
    scanf("%f%f%f",&u,&t,&a);
    s=(u*t)+(1.0)/(2.0)*a*t*t;
    
    printf("%f",s);
    
    
    

    
    return 0;
}
