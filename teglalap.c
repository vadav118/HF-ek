#include <stdio.h>


int tk(int a,int b){
    return 2*(a+b);
}

int tt(int a,int b){
    return a*b;
}



int main(){
    printf("Adja meg a téglalap oladlait: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Kerület %d, Terület: %d\n",tk(a,b),tt(a,b));


    return 0;
}