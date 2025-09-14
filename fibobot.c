#include <stdio.h>

int fibonot(int k1){
    int i = 3;
    int primeiro = 1; 
    int segundo = 2;
    int n = 3;

    while(k1 > 0){
        if(n == i){
            int temp = i;
            i = i + segundo;
            primeiro = segundo;
            segundo = temp;
        }
        else {
            k1--;
        }
        n++;
    }
    return n - 1;
}



int main() {
    int k, resultado;

    scanf("%d", &k);

    resultado = fibonot(k);

    printf("%d\n", resultado);

    return 0;
}