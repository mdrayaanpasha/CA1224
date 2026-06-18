/* -----------------------------
d-f.C
rayaan
10/07/24
----------------------------- */

#include <stdio.h>

int main() {
    printf("the following is a programme to convert degrees to fahrenheit \n");
    float c,f;
    
    printf("Insert temparature in Celcius: \n");
    scanf("%f",&c);
    f=(9.0/5.0) * c +32;
    
    printf("%f",f);
    
    
    

    
    return 0;
}
