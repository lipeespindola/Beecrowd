#include <stdio.h>

void troca(int *array, int n){

    for(int i = 0; i <= 9; i++){
        int temp = array[i];
        array[i] = array[19 - i];
        array[19 - i] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("N[%d] = %d\n", i, array[i]);
    }
}

int main () {
    int array[20];

    for(int i = 0; i < 20; i++){
        scanf("%d", &array[i]);
    }

    troca(array, 20);
}