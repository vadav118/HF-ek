#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void l_k_l_n_a(int t[],int *min,int *max, double *a){
*min=t[0];
*max=t[0];
int sum=0;

for(int i=0;i<10;i++){
    if(*min>t[i]){
        *min=t[i];
    }
    if(*max<t[i]){
        *max=t[i];
    }
    sum+=t[i];
}
*a=(double)sum/10;
}

int main(){
    srand(time(NULL));

    int t[10]={0};
    int min;
    int max;
    double a;
    for(int i=0;i<10;i++){
        t[i]=(rand()%(99-10+1)+10);
    }
    l_k_l_n_a(t,&min,&max,&a);
    printf("A tömb elemei: ");
    for(int i=0;i<10;i++){
        printf("%d ",t[i]);
    }
    printf("\nLegkisebb elem: %d\nLegnagyobb elem: %d\nAz elemek átlaga: %lf\n",min,max,a);


    return 0;
}