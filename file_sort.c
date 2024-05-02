#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]){
    if(argc!=2){
        printf("Hiba! Vagy nem adott meg nevet vagy túl sok argumentomot adott meg!\n");
        exit(1);
    }

    FILE *f;
    f=fopen(argv[1],"r");
    if(f==NULL){
        printf("Hiba! Nem sikerült megnyitni a fájlt!\n");
        exit(1);
    }

    char c;
    int n=0;

    for (c=fgetc(f);c!=EOF;c=fgetc(f))
    {
        if(c=='\n'){
            n++;
        }
    }
    fclose(f);

    f=fopen(argv[1],"r");
    int nums[n];
    int i=0;
    char *line=NULL;
    size_t len=0;

    while (getline(&line,&len,f)!=-1)
    {   
        line[strlen(line)-1]='\0';
        nums[i]=atoi(line);
        i++;
    }

    fclose(f);
    free(line);

    for (i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(nums[i]>nums[j]){
                int tmp=nums[i];
                nums[i]=nums[j];
                nums[j]=tmp;
            }
        }
        
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",nums[i]);
    }
    
    
    return 0;
}