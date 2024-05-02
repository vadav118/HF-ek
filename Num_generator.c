#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 99
#define MIN 10
#define SIZE 100

int main(){
    srand(time(NULL));
    FILE *f;
    f=fopen("numbers.txt","w");

    for (int i = 0; i < SIZE; i++)
    {
        fprintf(f,"%d\n",rand()%(99-10+1)+10);
    }
    

    fclose(f);
    return 0;
}