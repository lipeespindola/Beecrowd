#include <stdio.h>

int main () {

int N = 6, positivo = 0;
float x, media = 0, total;

do {
    scanf("%f", &x);
    if(x > 0) {
        positivo++;
        media += x;
    }
    N--;
}while(N > 0);

total = media / positivo;

printf("%d valores positivos\n%.1f\n", positivo, total);

return 0;






}