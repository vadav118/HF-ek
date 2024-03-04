#include <stdio.h>

int main(){
    printf("Adjon meg egy számot: ");
    int n=0;
    scanf("%d",&n);
    for(int i=4;i<=n;i+=4){
        printf("%d\n",i);
    }


    return 0;
}