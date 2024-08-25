#include<stdio.h>
int main(){
    int n,r,factr,factdif,factn,s1,i;
    printf("Whats n & r?\n");
    scanf("%d%d",&n,&r);
    factn=factr=factdif=1;
    i=2;
    s1=n-r;
    
    for(i=2;i<=n;i++){
        factn*=i;
        if(i==s1){
            factdif = factn;
        }
        if(i==r){
            factr=factn;
        }
    }
    printf("The answer is: %d",factn/(factr*factdif));
    return 0;
}
