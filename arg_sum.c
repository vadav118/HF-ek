#include <stdio.h>
#include <stdlib.h>

int main(int argc,const char *argv[]){
    if(argc!=3){
        printf("Hiba! Két paramétert (számot) kell megadni.\n");
        exit(1);
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("%d\n",a+b);


    return 0;
}