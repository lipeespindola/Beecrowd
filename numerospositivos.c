#include <stdio.h>

int main () {

float a;
int N = 6, total = 0;

do {
    scanf("%d", &a);
    if(a >= 0) {
        total++;
    }
    N--;
} while(N != 0);

printf("%d valores positivos\n", total);

return 0;



}