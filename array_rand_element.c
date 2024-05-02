#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int choice(const int n, const int array[]){
    return array[rand()%n];
}


int main(){
    srand(time(NULL));

    int array[SIZE]={3,4,5,10,14,16,17,18,42,69};
    printf("A tömb random eleme %d\n",choice(SIZE,array));

    return 0;
}