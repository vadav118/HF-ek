#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void shuffel(int n, int array[]){
    for(int i=n-1;i>0;i--){
        int j=rand()%i;
        int tmp=array[j];
        array[j]=array[i];
        array[i]=tmp;
    }

}

int main(){
    srand(time(NULL));
    int array[SIZE]={4,89,100,64,59,34,69,420,35,478};
    shuffel(SIZE,array);

    for(int i=0;i<SIZE;i++){
        printf("%d ",array[i]);
    }
    puts("");

    return 0;
}