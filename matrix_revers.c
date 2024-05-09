#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

void p_m_a(int matrix[SIZE][SIZE]){
    int i=0,j=SIZE-1;

    while (i<SIZE)
    {   
        printf("%d\n",matrix[i][j]);
        i++;
        j--;
    }
    
}

int main(){
    int matrix[SIZE][SIZE]={
        { 0, 1, 2, 3, 4, 5},
        { 6, 7, 8, 9,10,11},
        {12,13,14,15,16,17},
        {18,19,20,21,22,23},
        {24,25,26,27,28,29},
        {30,31,32,33,34,35}
    };

    p_m_a(matrix);

    return 0;
}