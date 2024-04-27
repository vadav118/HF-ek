#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    printf("Hány db random számot kérsz?\n");
    int n=5;
    scanf("%d",&n);
    int array[n];

    int a=1;
    printf("Alsó határ: 1");

    int f=90;
    printf("Felső határ (zárt intervallum): 90");

    int k=0,b=0;
    //array[i]=rand()% (f-a+1)+a;
    while (k<n)
    {   int r=rand()% (f-a+1)+a;
        for(int i=0;i<k;i++){
            if(array[i]==r){
                b=1;
            }
        }
        if(!b){
            array[k]=r;
            k++;
        }
        b=0;
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(array[j]>array[i]){
                int temp= array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }


    printf("A generált számok: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}