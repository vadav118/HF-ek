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

void quicksort(DynArray *self, int bal, int jobb)
{
    int x, temp;
    int i, j;

    i = bal;
    j = jobb;
    x = self->elements[(bal + jobb) / 2];
    while (i <= j)
    {
        while (self->elements[i] < x) ++i;
        while (self->elements[j] > x) --j;
        if (i <= j)
        {
            temp = self->elements[i];
            self->elements[i] = self->elements[j];
            self->elements[j] = temp;
            /* */
            ++i;
            --j;
        }
    }

    if (bal < j)  quicksort(self, bal, j);
    if (i < jobb) quicksort(self, i, jobb);
}
int main(){

    FILE *f;
    f=fopen("millions.txt","r");

    if(f==NULL){
        printf("Hiba!");
        exit(1);
    }

    DynArray *list=da_create();
    char *line=NULL;
    size_t len=0;

    while (getline(&line,&len,f)!=-1)
    {
        line[strlen(line)-1]='\0';
        da_append(list,atoi(line));   
    }

    fclose(f);
    
    quicksort(list,0,list->length);
   

    FILE *fout;
    fout=fopen("millions_out.txt","w");

    for(int i=0;i< list->length;i++){
        fprintf(fout,"%d\n",list->elements[i]);
    }

    free(line);
    list=da_destroy(list);
    fclose(fout);
    return 0;
}