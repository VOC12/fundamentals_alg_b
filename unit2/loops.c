#include <stdio.h>
#include "../libreries/utils.h"

int main(int argc, char** argv){

    for (int iterator = 1 ; iterator <=10 ; iterator = iterator + 1){
        printf("ITERATOR: %d\n", iterator);
        sleep(1000);
    }
    return 0;
}