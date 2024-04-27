#include <stdio.h>

void pov(int length,int tomb[]){
    for(int i=0;i<length;i++){
        if(tomb[i]<0){
            tomb[i]=-tomb[i];
        }
    }
}


int main(){ 
    int tomb[]={1,-12,5,6,-9,-10};
    int length=sizeof(tomb)/sizeof(tomb[0]);
    for(int i=0;i<length;i++){
        printf("%d\t",tomb[i]);
    }
    printf("\n");
    pov(length,tomb);
    for(int i=0;i<length;i++){
        printf("%d\t",tomb[i]);
    }
    printf("\n");
    return 0;
}