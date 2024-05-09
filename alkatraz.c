#include <stdio.h>
#include <string.h>

int main(){
    int cella[600] = {0};

    for (int i = 0; i < 600; i++)
    {
        for (int j = 0; j < 600; j++)
        {
            if((j+1)%(i+1)==0){
                if(cella[j]==0){
                    cella[j]=1;
                }
                else{
                    cella[j]=0;
                }
            }
        }
        
    }
    
    for (int i = 0; i < 600; i++)
    {
        if(cella[i]==1){
            printf("%d ",i+1);
        }
    }
    
    puts("");

    return 0;
}