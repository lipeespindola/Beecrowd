#include <stdio.h>

int main (){

    int s = 1;
    float resultado = 0;

    for(int i = s; i <= 100; i++){
        resultado = resultado + (1.00 / i);
    }

    printf("%.2f\n", resultado);
}