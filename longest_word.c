#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(){
    int db=0;
    int hossz=0;
    char szo[SIZE]={'\0'};
    
    
    printf("Adj meg szavakat '*' végjelig!\n");

    do{
        printf("Szó: ");
        fgets(szo,SIZE,stdin);
        szo[strlen(szo)-1]='\0';
        if(strcmp(szo,"*")!=0){
            db++;
            if(strlen(szo)>hossz){
                hossz=strlen(szo);
            }
        }

    }while(strcmp(szo,"*")!=0);

    printf("%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n",db,hossz);

    return 0;
}