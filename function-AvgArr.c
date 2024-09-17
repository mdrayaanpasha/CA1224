/*-----------------------------------------------
                AvgArr.c
                Rayaan
                17-09-24
-----------------------------------------------*/
#include<stdio.h>

//_______prototype___________
void ArrayInput(int N,int A[]);
void ArrayTraverse(int N,int A[]);
float ArrayAvg(int N,int A[]);


//_______main___________
int main(){
    int N;
    float Avg;
    printf("THIS PROGRAM IS TO COMPUTE THE AVERAGE OF AN ARRAY USING FUNCTIONS!\n\n");
    printf("What is N? \n");
    scanf("%d",&N);
    int A[N];
    ArrayInput(N,A);
    ArrayTraverse(N,A);
    Avg = ArrayAvg(N,A);
    
    printf("The Average Of The Array is %f\n",Avg);
    

    
    
    return 0;
}


//_________Function Initilization__________
void ArrayInput(int N,int A[]){
    int i;
    printf("Input Some Numbers in Array\n");
    for(i=1;i<=N;i++){
        scanf("%d",&A[i]);
    }
}

void ArrayTraverse(int N,int A[]){
    int i;
    printf("printing Numbers in Array\n");

    for(i=1;i<=N;i++){
        printf("%d\n",A[i]);
    }
}

float ArrayAvg(int N,int A[]){
    int i,sum;
    float avg;
    sum=0;
    for(i=1;i<=N;i++){
        sum+=A[i];
    }
    avg = (float)sum / N;
    
    return avg;
    
}
