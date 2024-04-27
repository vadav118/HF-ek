#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

typedef struct a_m_m_a{
    int max;
    int min;
    double avg;

}a_m_m_a;

a_m_m_a array_max_min_avg(int array[]){
    int max_array=array[0];
    int min_array=array[0];
    int avg_sum= 0;

    a_m_m_a a;

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
     
    a.max=max_array;
    a.min=min_array;
    a.avg=(double)avg_sum/MAX;
    return a;
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

    struct a_m_m_a a=array_max_min_avg(array);

    printf("\nLegkisebb elem: %d\nLegnagyobb elem: %d\nAz elemek átlaga: %lf\n", a.min, a.max, a.avg);

    return 0;
}