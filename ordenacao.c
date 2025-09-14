#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int tam;
char palavras[100][100];  //matriz pra guardar 100 palavras com ate 99 letras

int comp(char *a, char *b) {
    return strlen(b) - strlen(a);  
}

void copia(char *dest, char *orig) {
    int i = 0;
    while (orig[i]) {
        dest[i] = orig[i];
        i++;
    }
    dest[i] = '\0';
}

void insertionSort() {
    char aux[100];

    for (int i = 1; i < tam; ++i) {
        int j = i, k = j - 1;

        while (k >= 0 && comp(palavras[j], palavras[k]) < 0) {
            copia(aux, palavras[j]);
            copia(palavras[j], palavras[k]);
            copia(palavras[k], aux);
            --j;
            --k;
        }
    }
}

int eh_espaco(char c) {
    return c == ' ';
}

void separar_palavras(char *frase) {
    tam = 0;
    int i = 0;
    while (frase[i]) {
        while (eh_espaco(frase[i])) i++;  // pular espaços

        if (frase[i] == '\0') break;

        int j = 0;
        while (frase[i] && !eh_espaco(frase[i])) {
            palavras[tam][j++] = frase[i++];
        }
        palavras[tam][j] = '\0';
        tam++;
    }
}

int main() {
    int N;
    char frase[10000];

    scanf("%d\n", &N);

    for (int k = 0; k < N; ++k) {
        fgets(frase, sizeof(frase), stdin);
        
        int tamanho_string = strlen(frase);
        if (tamanho_string > 0 && frase[tamanho_string - 1] == '\n') {
            frase[tamanho_string - 1] = '\0';
        }

        separar_palavras(frase);
        insertionSort();

        printf("%s", palavras[0]);
        for (int i = 1; i < tam; ++i) {
            printf(" %s", palavras[i]);
        }
        printf("\n");
    }

    return 0;
}
