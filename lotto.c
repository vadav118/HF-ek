#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    printf("Hány db random számot kérsz?\n");
    int n=5;
    scanf("%d",&n);
    int array[n];

    int a;
    printf("Alsó határ: ");
    scanf("%d",&a);

    int f;
    printf("Felső határ (zárt intervallum): ");
    scanf("%d",&f);

    for(int i=0;i<n;i++){
        array[i]=rand()% (f-a+1)+a;
    }

    printf("A generált számok: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}