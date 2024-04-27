#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,const char* argv[]){
    if(argc<2){
        printf("Nem adtál meg egy szót sem!\n");
        exit(1);
    }

    int array[argc-1];
    int min=strlen(argv[1]);

    for(int i=1;i<argc;i++){
        array[i-1]=strlen(argv[i]);

        if(min>array[i-1]){
            min=array[i-1];
        }
    }

    for(int i=1;i<argc;i++){
        if(min==array[i-1]){
            printf("%s\n",argv[i]);
        }
    }

    

    return 0;
}