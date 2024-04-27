#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 200

int eros(char c[SIZE]){
    int k=0,n=0,sz=0;
    if(strlen(c)<8){
        return 0;
    }

    for(int i=0;c[i]!='\0';i++){
        if(!islower(c[i])){
            k=1;
        }
        if(!isupper(c[i])){
            n=1;
        }
        if(!isdigit(c[i])){
            sz=1;
        }

    }

    return (k && n && sz)? 1 : 0;
}


int main(){
    printf("Adj meg jelszavakat '*' végjelig!\n");
    char c[SIZE];

    do
    {   printf("\nJelszó: ");
        fgets(c,SIZE,stdin);
        c[strlen(c)-1]='\0';
        if(eros(c) && strcmp(c,"*")!=0){
            printf("Erős jelszó");
        }
        else if(strcmp(c,"*")!=0){
            printf("Gyenge jelszó");
        }
    } while (strcmp(c,"*")!=0);
    



    return 0;
}