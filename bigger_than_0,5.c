#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fptr;

    fptr=fopen("in.text","r");
    if(fptr==NULL){
        printf("# in.txt fájlt nem sikerült megnyitni\n}");
        exit(1);
    }

    printf("# in.txt sikeresen megnyitva\n# 0,5-nél nagyobb számok szűrése...\n");

    double nums[200];
    char s[500];
    int count = 0;
    while(fgets(s,500,fptr)){

        int length=strlen(s);
        s[length-1]='\0';

        double num=atof(s);
        if(num > 0.5){
            nums[count]=num;
            count++;
        }
    }

    fclose(fptr);

    printf("# szűrés vége\n");

    fptr=fopen("out.text","w");
    int i=0;
    while (i<count)
    {   
        fprintf(fptr,"%lf\n",nums[i]);
        i++;
    }
    
    fclose(fptr);

    printf("# out.txt bezárva\n# out.txt-be kiírt számok mennyisége: %d db\n",count);
    return 0;
}