#include <stdio.h>

int soma(int x1, int y1){
    int total = 0;
    for(int i = y1; y1 > 0; x1++){
        if(x1 % 2 != 0){
            total += x1;
            y1--;
        }
    }

    return total;
}

int main () {
    int n, x, y;

    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        scanf("%d %d", &x, &y);
        int resultado = soma(x, y);
        printf("%d\n", resultado);
    }
}