#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"

#define SIZE 26

void c_a(char c[SIZE]){
    for(int i=0;i<SIZE;i++){
        c[i]='a'+i;
    }


}


char abc[SIZE+1];
string s_a(){
    for(int i=0;i<SIZE;i++){
        abc[i]='a'+i;
    }
    abc[SIZE]='\0';
    return abc;
}


int main(){
    /*char c[SIZE];
    c_a(c);
    for(int i=0;i<SIZE;i++){
        printf("%c",c[i]);
    }*/

    string s=s_a();
    
    printf("%s",s);


    return 0;
}