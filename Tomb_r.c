#include <stdio.h>

int rend(int length,int *tomb){
    int logic = 1;
    
    for(int i=0;i<length-1;i++){
        if(tomb[i]>tomb[i+1]){
            logic=0;
            break;
        }
    }
    
   return logic;

}


int main(){

    int tomb[] = {1,2,3,4,5};
    int length= sizeof(tomb)/sizeof(tomb[0]);

    if(rend(length,tomb)){
        printf("Rendezett");
    }
    else{
        printf("Nem rendezett");
    }

 
    return 0;
}