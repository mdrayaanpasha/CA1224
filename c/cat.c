#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *FP;
    int ch;

    if(argc < 2){
        printf("SYNTAX ERROR\n");
        exit(1);
    }

    if((FP = fopen(argv[1], "r")) == NULL){
        printf("FILE DOESNT EXIST! \n");
        exit(1);
    }

    while((ch=getc(FP))!=EOF){
        putchar(ch);
    }

    fclose(FP);

    return 0;
}