#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"

int main(){
    string s= get_string("Szám: ");
    int len=strlen(s);
    int sum=0;

    for (size_t i = 0; i < len; i++){
        sum+=s[i]-'0';
    }

    printf("\nA számjegyek összege: %d\n",sum);
    
    return 0;
}