#include <stdio.h>

#define SIZE 100

int main(){
    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");
    int szam;
    int array[SIZE]= {0};
    int db=0;
    int van = 0;

    do{ 
        printf("Szam: ");
        scanf("%d",&szam);

        if(szam>99 || szam<0){

            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");

        }
        else{

            for(int i=0;i<db;i++){
                if(array[i]==szam){
                    van = 1;
                }
            }

            if(!van && szam!=0){
                array[db]=szam;
                db++;
            }
            van=0;


        }


    }while(szam!=0 && db!=SIZE-1);

    for(int i=0;i<db;i++){
        for(int j=0;j<db;j++){
            if(array[i]<array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp; 
            }
        
        }
    }

    printf("%d db különböző szám lett megadva.",db); 
    printf("Ezek (növekvő sorrendben): ");
    for(int i=0;i<db-1;i++){
        printf("%d, ",array[i]);
    }
    printf("%d\n",array[db-1]);

    return 0;
}