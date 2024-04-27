#include <stdio.h>

void elemek(int length,int tomb[]){
    for(int i=0;i<length;i++){
        if(i==length-1){
            printf("%d\n",tomb[i]);
        }
        else{
            printf("%d, ",tomb[i]);
        }
    }
}


int main(){
    int tomb[]={4,7,34,23,67};
    int length=sizeof(tomb)/sizeof(tomb[0]);
    elemek(length,tomb);
    return 0;
}