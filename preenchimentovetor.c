#include <stdio.h>
void pre(int *array, int n){

    for(int i = 1; i < n; i++){
        array[i] = array[i - 1] * 2;
        printf("N[%d] = %d\n", i, array[i]);
    }

}

int main () {
    int array[10];

    scanf("%d", &array[0]);
    printf("N[0] = %d\n", array[0]);
    pre(array, 10);

    return 0;
}