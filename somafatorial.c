#include <stdio.h>

long long soma (int x1){
    long long totalx = 1;

    for(int i = 1; i <= x1; i++){
        totalx *= i;
    }


    return totalx;
}


int main () {
    int x, y;
    long long total; //suporta numeros grandes

    while(scanf("%d %d", &x, &y) == 2) { // garante que o scanf retornou 2 valores

    total = soma(x) + soma(y);
    printf("%lld\n", total);

    } 

    return 0;


}