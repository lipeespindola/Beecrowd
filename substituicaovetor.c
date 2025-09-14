#include <stdio.h>

void sub(int *array, int n){

    for(int i = 0; i < n; i++){
        if(array[i] > 0){
            printf("X[%d] = %d\n", i, array[i]);
        }
        else {
            printf("X[%d] = 1\n", i);
        }
    }
}

int main () {
    int array[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    sub(array, 10);
}