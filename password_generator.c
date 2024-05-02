#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX 12
#define MIN 8

void create(int size,char *s){
    

    for(int i=0;i<size;i++){
        int mode=rand()%4;

        if(mode==0){
            int low=rand()%(122-97+1)+97;
            s[i]=(char)low;
        }

        else if(mode==1){
            int up=rand()%(90-65+1)+65;
            s[i]=(char)up;
        }

        else if(mode==2){
            int num=rand()%(57-48+1)+48;
            s[i]=(char)num;
        }

        else if(mode==3){

            int spe=rand()%4;
            if(spe==0){
                s[i]='.';
            }

            else if(spe==1){
                s[i]=',';
            }

            else if(spe==2){
                s[i]=';';
            }

            else if(spe==3){
                s[i]='\'';
            }
        }
    }
    s[size]='\0';
   
}

int check(int size,char *s){
    int low=0,up=0,num=0,spe=0;

    for(int i=0;i<size;i++){
        if(isupper(s[i])){
            up=1;
        }
        if(isdigit(s[i])){
            num=1;
        }
        if(islower(s[i])){
            low=1;
        }
        if(s[i]=='.' || s[i]==',' || s[i]==';' || s[i]=='\''){
            spe=1;
        }
    }
    return (up && low && num && spe)? 1 : 0;
}

int main(){

    srand(time(NULL));
    char *s;
    int size=rand()%(MAX-MIN+1)+MIN;
    s=(char *)malloc(size+1);
    do
    {
        create(size,s);
    } while (check(size,s)!=1);
    
   
    printf("%s\n",s);
    free(s);

    return 0;
}