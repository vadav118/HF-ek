#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INITIAL_CAPACITY 2
#define MULTIPLAYER 2

typedef char* string;

typedef struct{
    string *elements;
    int length; 
    int capacity;
}DynArray;

void  mem_error_exit(){
    fprintf(stderr, "Error: cannot allocate memory");
    exit(1);
}

DynArray *da_create(){

    DynArray *result=malloc(sizeof(DynArray));
    if(result==NULL){
        mem_error_exit();
    }

    result ->elements = malloc(INITIAL_CAPACITY*sizeof(char));
    if(result->elements==NULL){
        mem_error_exit();
    }
    result->length=0;
    result->capacity=INITIAL_CAPACITY;

    return result;
}

void da_append(DynArray *self,char *data,int len){
    if(self->length == self->capacity){

        int new_capacity=MULTIPLAYER*self->capacity;
        self->elements = realloc(self->elements, len* sizeof(char*));
        if(self->elements==NULL){
            mem_error_exit();
        }
        self->capacity=new_capacity;
    }

    self->elements[self->length] =strdup(data);
    self->length++;
}

void * da_destroy(DynArray *self){
    free(self->elements);
    free(self);
    return NULL;
}

void to_upper(char* string)
{
    const char OFFSET = 'a' - 'A';
    while (*string)
    {
        *string = (*string >= 'a' && *string <= 'z') ? *string -= OFFSET : *string;
        string++;
    }
}

int main(){
    FILE *f;
    f=fopen("nevek.csv","r");

    if(f==NULL){
        printf("Hiba!");
        exit(1);
    }

    DynArray *list=da_create();
    char *line=NULL;
    size_t len=0;
    char *name=NULL;

    while (getline(&line,&len,f)!=-1)
    {
        line[strlen(line)-1]='\0';
        name=strtok(line," , ");
        strtok(NULL," , ");
        char *t_name=strtok(NULL," ");
        to_upper(t_name);
        int size_name=strlen(name);
        name[0]=toupper(name[0]);
        if(strcmp(t_name,"PTI")==0){
            da_append(list,name,size_name);
        }
           
    }

    int size=list->length;

    for (int i = 0; i < size; i++)
    {
        printf("%s\n",list->elements[i]);
    }
    

    fclose(f);
    da_destroy(list);
    return 0;
}