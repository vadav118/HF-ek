#include <stdio.h>
#include "prog1.h"

int char_count(string a,char c){

    int i=0;

    for(int j=0;a[j]!='\0';j++){
        if(a[j]==c){
            i++;
        }
    }

    return i;
}

int main(){

    string a="aaaammmamnjnjnjnajnajjnajnjanjna";
    char c='a';
    printf("%d\n",char_count(a,c));

    return 0;
}