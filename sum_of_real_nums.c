#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fptr;

    fptr=fopen("valos_szamok.text","r");

    double sum=0;
    char s[500];
    while(fgets(s,500,fptr)){
        int length=strlen(s);
        s[length-1]='\0';
        for (int i = 0; i < length; i++)
        {
            if(s[i]==','){
                s[i]='.';
            }
        }
        
        sum+=atof(s);
    }
    printf("%.20lf\n",sum);
    fclose(fptr);
    return 0;
}