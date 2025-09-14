#include <stdio.h>

#define MAX 100

void mult_matriz(int x1, int y1, int x2, int y2, int matriz1[MAX][MAX], int matriz2[MAX][MAX]){
    int matriz_resposta[MAX][MAX];

    for(int i = 0; i < x1; i++){ //perpassa pelos elementos da matriz nova
        for(int j = 0; j < y2; j++){
            int soma = 0, mult;
            for(int c = 0; c < y1; c++){ //numero de elementos a ser somado
                mult = matriz1[i][c] * matriz2[c][j];
                soma += mult;
            }
            matriz_resposta[i][j] = soma;
        }
    }

    for(int i = 0; i < x1; i++){
        for(int j = 0; j < y2; j++){
            if(j == y2 - 1){
                printf("%d\n", matriz_resposta[i][j]);
            }
            else {
            printf("%d ", matriz_resposta[i][j]);
            }
        }
    }
}

void matriz_nums(int x1, int y1, int x2, int y2){
    int matriz1[MAX][MAX], matriz2[MAX][MAX];
    for(int i = 0; i < x1; i++){
        for(int j = 0; j < y1; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(int i = 0; i < x2; i++){
        for(int j = 0; j < y2; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

    mult_matriz(x1, y1, x2, y2, matriz1, matriz2);
}

int main () {
    int x1, y1, x2, y2; //i e j das matrizes

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if(y1 != x2){
        printf("Matriz Invalida\n");
        return 0;
    }

    matriz_nums(x1, y1, x2, y2);
    
    return 0;
}