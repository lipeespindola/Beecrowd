#include <stdio.h>

float soma_matriz(float matriz[12][12]){
    float soma = 0;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if(j > i && j > 11 - i){
                soma += matriz[i][j];
            }
        }
    }

    return soma;
}

float media_matriz(float matriz[12][12]){
    float soma = 0;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if(j > i && j > 11 - i){
                soma += matriz[i][j];
            }
        }
    }

    return soma /30.0;
}

int main () {
    float matriz[12][12], soma = 0;
    char op;

    do{
        scanf("%c", &op);
    }while(op != 'S' && op != 'M');

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    if(op == 'S'){
        float soma = soma_matriz(matriz);
        printf("%.1f", soma);
    }
    else if(op == 'M'){
        float media = media_matriz(matriz);
        printf("%.1f", media);
    }

    return 0;
}