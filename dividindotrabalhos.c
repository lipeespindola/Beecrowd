#include <stdio.h>
#include <stdlib.h>

int divisao(int *trabalhos, int n1){

    int gugu = 0;
    int rangel = 0; //parte do trabalho do primeiro colega
    for(int i = 0; i < n1; i++){
        gugu += trabalhos[i]; //todo o trabalho do segundo
    }
    int melhor_diferenca = llabs(rangel - gugu);

    for (int i = 0; i < n; i++) {
        rangel += trabalhos[i];
        gugu -= trabalhos[i];
        int atual_diferenca = abs(rangel - gugu);
        if (atual_diferenca < melhor_diferenca) {
            melhor_diferenca = atual_diferenca;
        }
    }
    return melhor_diferenca;
}

int main () {
    int n;

    do{
    if(scanf("%d", &n) == EOF){
        break;
    }
    else{
        int trabalhos[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &trabalhos[i]);
        }
        int total = divisao(trabalhos, n);
        printf("%d\n", total);
    }
    }while(n < 100000);

    return 0;
}