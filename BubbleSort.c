/*___________________________________________________________
                BubbleSort.c
                Rayaan
                12-08-24
___________________________________________________________*/
#include <stdio.h>

int main() {
    int i,j,n,temp;
    
    printf("Programme to compute sorting\n How many Numbers do you want?\n");
    scanf("%d",&n);
    
    int arr[n];
    printf("insert numbers :\n");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-i;j++){
            if(arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("sorted numbers are:\n");
     for(i=1;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
