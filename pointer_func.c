#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

void array_max_min_avg(int array[], int* max,int* min, double* avg){
    int max_array=array[0];
    int min_array=array[0];
    int avg_sum= 0;

    for (int i = 0; i < MAX; i++)
    {
        if(max_array<array[i]){
            max_array=array[i];
        }

        if(min_array>array[i]){
            min_array=array[i];
        }

        avg_sum+=array[i];
    }
     
    *max=max_array;
    *min=min_array;
    *avg=(double)avg_sum/MAX;
}

int main(){

    srand(time(NULL));
    int array[MAX];
    
    printf("A tömb elemei: ");
    for (int i = 0; i < MAX; i++)
    {
        array[i]= rand()% (99-10+1) - 10;
        printf("%d ",array[i]);
    }
    
    int max;
    int min;
    double avg;

    array_max_min_avg(array,&max,&min,&avg);

    printf("\nLegkisebb elem: %d\nLegnagyobb elem: %d\nAz elemek átlaga: %lf\n", min, max, avg);


    return 0;
}