#include <stdio.h>

#define SIZE 26

void line(char c,int i){
    for(int j=0;j<i;j++){
        printf("%c",c);

    }
    printf("\n");
}

void abc(char c[],int n){
    for(int i=0;i<n;i++){
        c[i]='a'+i;
    }

}


int main(){
    char c[SIZE];
    abc(c,SIZE);    
    for(int i=0;i<SIZE;i++){
        printf("%c ",c[i]);
    }
    return 0;
}