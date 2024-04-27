#include <stdio.h>

int valid_triangle(double a, double b, double c){
    if(a+b<c || a+c <b || b+c < a || a<0 || b<0 || c<0){
        return 0;
    }
    else{
        return 1;
    }


}


int main(){
    double a,b,c;
    printf("Adja meg a háromszög oldalait: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(valid_triangle(a,b,c)){
        printf("Megszerkezthető\n");
    }
    else{
        printf("Nem megszerkezthető\n");
    }
    return 0;
}