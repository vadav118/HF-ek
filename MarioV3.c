#include <stdio.h>


int main(){
    int num;
    printf("Adj meg egy szamot: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=num;j>i;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("#");
        }
        printf(" ");
        for(int j=0;j<=i;j++){
            printf("#");
        }
         printf("\n");
    }


    return 0;
}