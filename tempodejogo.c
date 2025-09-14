#include <stdio.h>

int main() {

int inicio, fim, duracao1, duracao2;

scanf("%d %d", &inicio, &fim);
duracao1 = (fim - inicio);
duracao2 = (24 - inicio + fim);

if(inicio < fim) {
    printf("O JOGO DUROU %d HORA(S)\n", duracao1);
}

else {
    printf("O JOGO DUROU %d HORA(S)\n", duracao2);
}






    return 0;
}