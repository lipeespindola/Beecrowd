#include <stdio.h>

int main (){
    int s = 1;
    float resultado = 0;

    for(int i = s; i <= 100; i++){
        resultado += 1 / s;
    }

    printf("%.2f", resultado);
}