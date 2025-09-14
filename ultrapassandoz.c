#include <stdio.h>

int zero(int x1, int z1){

    int total = 0;
    int resultado;
    for(int i = 1; total <= z1 ; i++){
        total += x1;
        if (total > z1){
            resultado = i;
            break;
        }
        else {
            x1++;
        }
    }
    return resultado;
}


int main () {
    int x, z;

    scanf("%d", &x);

    do {

        scanf("%d", &z);

    }while (z <= x); //garante que z > x

    int total = zero(x, z);

    printf("%d\n", total);
}