#include <stdio.h>
#include "../libreries/utils.h"
#include <stdlib.h>

int main(int argc, char** argv){

    for (int iterator = 1 ; iterator <=10 ; iterator = iterator + 1){
        printf("ITERATOR: %d\n", iterator);
        //sleep(1000);
    }
    //Cambios

    int rango = 100;
    int count = 0;
    while (rango <= 1) {
        count = count + rango;
        rango++ ; // rango = rango + 1;
    }
    printf("suma: %d\n", count);

    //loops infinitos

    while (true) {
        system("clear");
        printf("Program running...\n");
        //sleep(1000);
        break;
    }
    for (;;){
        break;
    }
    
    bool condicion;
    int i= 1; 
    int cuenta = 0;
    // 1 + 2 + 3

    do{
        printf("dato: %d\n", cuenta);
        cuenta += i; //cuenta = cuenta + 1
        condicion = (i<=3);
        i++;   
    } while(condicion);
    return 0;
}