#include <stdio.h>

int soma(int x1, int n1){
    int resultado = 0;
    for(int i = 0; i < n1; i++){
        resultado += i;
        resultado += x1;
    }

    return resultado;

}

int main () {
    int x, n;

    scanf("%d", &x);

    do {
        scanf("%d", &n);
    }while(n <= 0);

    int total = soma(x, n);

    printf("%d\n", total);

    return 0;
}