#include <stdio.h>

int f(int x1){

    int total = 1;

    for(int i = 2; i <= x1; i++){
        total *= i;
    }
    return total;

}

int main () {
    int x, resultado;
    scanf("%d", &x);

    resultado = f(x);

    printf("%d\n", resultado);

    return 0;
}