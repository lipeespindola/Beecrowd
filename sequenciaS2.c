#include <stdio.h>

int main() {
    int y = 1, x = 1;
    float resultado = 0.0;

    for (int i = x; i <= 39; i += 2) {
        resultado += (float) i / y;
        y *= 2;
    }

    printf("%.2f\n", resultado);

    return 0;
}
