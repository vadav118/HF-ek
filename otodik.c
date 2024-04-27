#include <stdio.h>
#include "prog1.h"


#define SIZE 100

int get_int(string prompt){
    printf("%s\n",prompt);
    int n;
    scanf("%d",&n);
    return n;
}

void feltolt(char array[]){
    for(int i=0;i< SIZE;i++){
        array[i] ='0';
    }
}


int my_strlen(string s){
    int i=0;
    for ( i = 0; s[i] !='\0'; i++)
    {
        /* code */
    }
    return i;
}

int is_palindrome(string s){
    int size=my_strlen(s);
    for(int i=0;i<size/2;i++){
        if(s[i]!=s[size-i-1]){
            return 0;
        }
    }
    return 1;
}

int contains_char(string s,char c){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c){
            return 1;
        }
    }
    return 0;
}

int find_char(string s, char c){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c){
            return i;
        }
    }
    return -1;
}


int main(){
    string s = "abba";
    char c= 'a';
    printf("%d\n",find_char(s,c));


    /*char array[SIZE];
    feltolt(array);
    for(int i=0;i< SIZE;i++){
        printf("%c",array[i]);
    }*/
    /*string s=get_string("Neved: ");
    int n= get_int("Adj meg egy szamot: ");
   
    printf("\nHello %s\n",s);*/
    return 0;
}