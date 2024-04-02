#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"
#define SIZE 100

int main(int argc,char const *argv[]){
    /*char Text[SIZE];
    printf("Adjon meg egy szöveget: ");
    fgets(Text,SIZE,stdin);
    Text[strlen(Text)-1]='\0';
    printf("Szöveg %s\n",Text);*/
    /*int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("%d\n",a+b);*/

    if(argc==1){
        printf("Hiba");
        exit(1);
    }

    printf("Hello %s\n",argv[1]);
    int n=atoi(argv[2]);
    for(int i=3;i<argc;i++){
        n-=atoi(argv[i]);
    }
    printf("%d\n",n);



    return 0;
}