#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct tomb{ 
    int max;
    int min;
    double a;
};


struct tomb l_k_l_n_a(int t[]){
    struct tomb tt;
    tt.min=t[0];
    tt.max=t[0];
    int sum=0;

    for(int i=0;i<10;i++){
        if(tt.min>t[i]){
            tt.min=t[i];
        }
        if(tt.max<t[i]){
            tt.max=t[i];
        }
        sum+=t[i];
    }
    tt.a=(double)sum/10;
    return tt;
}

int main(){
    srand(time(NULL));

    int t[10]={0};
   
    for(int i=0;i<10;i++){
        t[i]=(rand()%(99-10+1)+10);
    }
    struct tomb tt=l_k_l_n_a(t);
    printf("A tömb elemei: ");
    for(int i=0;i<10;i++){
        printf("%d ",t[i]);
    }
    printf("\nLegkisebb elem: %d\nLegnagyobb elem: %d\nAz elemek átlaga: %lf\n",tt.min,tt.max,tt.a);


    return 0;
}