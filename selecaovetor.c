#include <stdio.h>

void sel(float *array1, int n){

    for(int i = 0; i < n; i++){
        if(array1[i] <= 10){
            printf("A[%d] = %.1f\n", i, array1[i]);
        }
    }

}

int main (){
    float array[100];
    for(int i = 0; i < 100; i++){
        scanf("%f", &array[i]);
    }
    sel(array, 100);

    return 0;
}