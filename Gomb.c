#include <stdio.h>
#include <math.h>



double get_double(){
    double num;
    scanf("%lf",&num);
    return num;
}


double gf(double r){
    return pow(r,2)*M_PI*4;
}

double gt(double r){
    return (pow(r,3)*M_PI*4)/3;
}

int main(){
    printf("Adja meg a gömb sugarát(0.0): ");
    double r=get_double();
    printf("Felszín %lf Térfogat %lf",gf(r),gt(r));

    
    return 0;
}