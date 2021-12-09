#include "lib.h"
float max(float array[],int dim){
    float max=array[0];
    for(int i=1;i<dim;i++){
        if(array[i]>=max){
            max=array[i];
        }
    }
    return max;
}

