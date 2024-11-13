#include<stdio.h>


int main(int argc, char *argv[]) {

    if(argc < 3 || argc > 4) {
        printf("SYNTAX ERROR ");
        return 0;
    }

    FILE *SrcPtr;
    FILE *TargetPtr;
    int ch;

    if((SrcPtr=fopen(argv[1], "r"))==NULL){
        printf("FILE DOESNT EXIST\n");
        return 0;
    }

    if((TargetPtr=fopen(argv[2], "w"))==NULL){
        printf("FILE DOESNT EXIST\n");
        return 0;
    }

    while((ch=fgetc(SrcPtr))!= EOF){
        fputc(ch, TargetPtr);
    }

    fclose(SrcPtr);
    fclose(TargetPtr);

    return 0;
}