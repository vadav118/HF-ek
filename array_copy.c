#include <stdlib.h>
#include <stdio.h>

int main(){
    int db=0;
    printf("Hány db számot szeretnél bevinni?\n");
    scanf("%d",&db);
    int array[db];

    for(int i=0;i<db;i++){
        printf("%d. szam: ",i+1);
        scanf("%d",&array[i]);
    }

    int array2[db];
    for(int i=0;i<db;i++){
        array2[i]=abs(array[i]);
    }

    printf("\nA bevitt számok abszolútértékei: ");
    for(int i=0;i<db;i++){
        printf("%d ",array2[i]);
    }

    printf("\nA megadott számok: ");
    for(int i=0;i<db;i++){
        printf("%d ",array[i]);
    }


    return 0;
}