#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int sum1=0;
    int sum2=0;

    for(int i=0;i<100;i++){
        sum1+=pow(i+1,2);
        sum2+=i+1;
    }
    sum2=pow(sum2,2);

    printf("%d\n",abs(sum2-sum1));

    return 0;
}