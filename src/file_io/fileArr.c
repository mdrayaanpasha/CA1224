#include<stdio.h>

// yello bro, so i have written this comments to make it easy.


int main(){
    /* say you have a file like with data like this: 2 4 2 B C A 0 8.
    - you notice i have left some space in b/w. thats cause when you try to use this fscanf() thing it returns numbers before a space.
    - so you can see where this is going, then you can run a loop and store this in an array of chars.
    */

    //opening this file.
    FILE *TheRollNoFile = fopen("rollno.txt","r");

    // make that array thing.
    char arr[100];

    if(TheRollNoFile){
        //  what am saying here is like dude keep getting one char from TheRollNoFile and put it in arr until you go to end of file. or it returns -1 the value
        // of EOF.
        int i=0;
        while(fscanf(TheRollNoFile, "%s",arr) != EOF){
            printf("%c\t",arr[i]);
        }
    }else{
        printf("Problematico bro");
    }

    return 0;
     
}