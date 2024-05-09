#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef char* string;

string
my_strfry(string s){

    int len=strlen(s);
    for (int i = 0; i < len; i++)
    {   int random=rand()%len;
        char tmp=s[i];
        s[i]=s[random];
        s[random]=tmp;
       
    }

}

int main(){
    srand(time(NULL));
    char s[]="megszentsegtelenithetetlensegeskedeseitekrt";

    printf("%s\n",s);
    my_strfry(s);
    printf("%s\n",s);
    return 0;
}