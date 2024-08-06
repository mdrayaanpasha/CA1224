/*___________________________________________________________________________________
                        search.c
                        Rayaan
                        06-08-24
___________________________________________________________________________________*/

#include <stdio.h>

int main() {
    
    int n,i,search,loc;
    
    printf("How many numbers do you wanna have?\n");
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("What do you wanna search?\n");
    scanf("%d",&search);
    
    
    loc=-1;
    
    for(i=0;i<=n;i++){
        if(arr[i]==search){
            loc=i;
            break;
        }
    }
    
    if(loc > -1){
        printf("Found it here: %d",loc);
    }else{
        printf("No can't findsville!");
    }

    return 0;
}
