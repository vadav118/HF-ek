#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_CAPACITY 2
#define MULTIPLAYER 2

typedef struct{
    int *elements;
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

    result ->elements = malloc(INITIAL_CAPACITY*sizeof(int));
    if(result->elements==NULL){
        mem_error_exit();
    }
    result->length=0;
    result->capacity=INITIAL_CAPACITY;

    return result;
}

void da_append(DynArray *self,int data){
    if(self->length == self->capacity){

        int new_capacity=MULTIPLAYER*self->capacity;
        self->elements = realloc(self->elements, new_capacity * sizeof(int));
        if(self->elements==NULL){
            mem_error_exit();
        }
        self->capacity=new_capacity;
    }

    self->elements[self->length] =data;
    self->length++;
}

void * da_destroy(DynArray *self){
    free(self->elements);
    free(self);
    return NULL;
}

double da_sum(DynArray *self){
    double sum=0;
    for (int i = 0; i < self->length; i++)
    {
        sum+= self->elements[i];
    }
    
    return sum;
}

double da_average(DynArray *self){
    return da_sum(self)/self->length;
}

int main(){

    FILE *f;
    f=fopen("numbers.txt","r");

    DynArray *list=da_create();
    char *line=NULL;
    size_t len=0;

    while (getline(&line,&len,f)!=-1)
    {
        line[strlen(line)-1]='\0';
        da_append(list,atoi(line));   
    }
    
    printf("%lf\n",da_average(list));

    free(line);
    list=da_destroy(list);
    fclose(f);
    return 0;
}