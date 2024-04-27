#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int is_valid_c_identifier(const char* input){
    int length=strlen(input);
    if(length==0){
        return 0;
    }
    if(input[0]!='_' && !isalpha(input[0])){
        return 0;
    }

    for(int i=1;i<length;i++){
        if(input[i]!='_' && !isalpha(input[i]) && !isalnum(input[i])){
            return 0;
        }
    }

    return 1;
}

int main(){
    printf("Adja meg sztringeket '*' végjelig");

    while (1)
    {
        char* s=(char*)malloc(300);
        printf("\nINPUT: ");
        fgets(s,300,stdin);
        s[strlen(s)-1]='\0';

        if(strcmp(s,"*")==0){
            break;
        }

        if(is_valid_c_identifier(s)){
                printf("YES\n");
        }
        else{
                printf("NO\n");
        }

        free(s);
    }

    return 0;
}