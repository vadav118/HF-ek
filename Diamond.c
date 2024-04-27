#include <stdio.h>

int main(){
    int num;
    printf("Adj meg egy szamot(pozitív páratlan): ");
    scanf("%d",&num);
    if(num%2==1 && num >0){
        for(int i=1;i<=num;i+=2){
            for(int j=num;j>i;j-=2){
                printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("#");
            }
            printf("\n");
        }
        
        for(int i=num-2;i>=1;i-=2){
            for(int j=num;j>i;j-=2){
                printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("#");
            }
            printf("\n");
        }
    }
    else{
        printf("Nem páratlan vagy pozitív számot adott meg!\n");
        return 1;
    }
    


  return 0;  
}