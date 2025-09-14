#include <stdio.h>
#include <string.h>


void justificador(int tamanho[], int quant_nomes, int maior, int espacos[], char nome[][51]){
    for(int i = 0; i < quant_nomes; i++) {
        int espacos = maior - tamanho[i]; //espacos a serem printados
        for(int j = 0; j < espacos; j++) {
            printf(" ");
        }
        printf("%s\n", nome[i]); //printa o nome da linha i
    }
    printf("\n");

}

void maior(int quant_nomes){
    int tamanho[quant_nomes];
    int espacos[quant_nomes];
    char nome[quant_nomes][51]; //salva os nomes em uma matriz
    int maior = 0;

    for (int i = 0; i < quant_nomes; i++) {
        scanf("%s", nome[i]); //armazena o nome nas linhas comecando sempre na coluna 0
        tamanho[i] = strlen(nome[i]);
        if (tamanho[i] > maior) {
            maior = tamanho[i];
        }
    }

    justificador(tamanho, quant_nomes, maior, espacos, nome);
}

int main () {
    int quant_nomes;

    while(scanf("%d", &quant_nomes) != 0){
        if(quant_nomes == 0){
            break;
        }

        maior(quant_nomes);
    }
}