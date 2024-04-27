#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc,const char* argv[]){

    if(argc!=2){
        printf("Hiba! Adja meg egy szöveges állomány nevét!\n");
        exit(1);
    }

    FILE *fptr;

    fptr=fopen(argv[1],"r");

    if(fptr == NULL){
        printf("Hiba! A %s nevű fájlt nem sikerült megnyitni!\n", argv[1]);
        exit(1);
    }

    char c;
    int count=0;

    for(c=getc(fptr);c!=EOF;c=getc(fptr)){
        if(c=='\n'){
            count++;
        }
    }
    printf("%d\n",count);

    fclose(fptr);
    return 0;
}