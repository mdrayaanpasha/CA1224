/* -----------------------------
area.c
Rayaan
10-july-24
*/

#include<stdio.h>

int main(){
    printf("the following is a programme to find the area of rectangle!\n");
    int l,b,area;
    printf("Insert the values of l and b: \n");
    scanf("%d%d",&l,&b);
    
    area=l*b;
    printf("%d",area);
    
    return 0;
}
