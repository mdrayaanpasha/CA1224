/*========================================================
                    Rayaan Pasha
                    LinkedList.c
                    9/1/24
=========================================================*/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// = = = = = = = = = PROTOTYPE = = = = = = = = = = = = = 
void inputArr(int arr[],int n);
void printArr(int arr[],int n);
void sort(int arr[],int n);
bool BinSearch(int arr[],int n,int key);

// = = = = = = = = = MAIN = = = = = = = = = = = = = 
void main(){
     int n,search;
     int arr[n];
    printf("this is a programme to perform bin search!!!\n");
    
    printf("How many numbers do you want to have?: \n");
    scanf("%d",&n);
    
    inputArr(arr,n);
    printArr(arr,n);
    sort(arr,n);
    printf("WHAT ARE U LOOKING FOR?: \n");
    scanf("%d",&search);
    if(BinSearch(arr,n,search)){
        printf("FOUND!!");
    }else{
        printf("NOT FOUND!!!");
    }
    
}

// = = = = = = = = = FUNCTION DECLARATION = = = = = = = = = = = = = 

void inputArr(int arr[],int n){
    printf("please keep inserting numbers: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void printArr(int arr[],int n){
    printf("the numbers you inserted are: \n");
    
    for(int j=0;j<n;j++){
        printf("%d\n",arr[j]);
    }
}

void sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

bool BinSearch(int arr[],int n,int key){
    int low,high,mid;
    low=0;
    high=n;

    while (low < high){
        mid = (low+high) / 2;
        if(arr[mid] > key){
            low=mid+1;
        }else if(arr[mid] < key){
            high=mid-1;
        }else{
            return true;
        }
    }

    return false;
}
