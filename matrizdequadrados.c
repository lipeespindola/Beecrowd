#include <stdio.h>
#include <math.h>

int formatacao(int j, int ordem_matriz, unsigned long long matriz_resposta[ordem_matriz][ordem_matriz]){
    int count = 0;
    unsigned long long maior = matriz_resposta[0][j];

    for(int i = 0; i < ordem_matriz; i++){
                if(matriz_resposta[i][j] > maior){
                    maior = matriz_resposta[i][j];
                }
    }
    

    while(maior > 0){
        maior /= 10;
        count++;
    } 

    return count;
}


int main () {
    int faltantes, n = 4, ordem_matriz;

    scanf("%d", &faltantes);

    do{

        scanf("%d", &ordem_matriz);
        unsigned long long matriz[ordem_matriz][ordem_matriz];

        for(int i = 0; i < ordem_matriz; i++){
            for(int j = 0; j < ordem_matriz; j++){
                scanf("%llu", &matriz[i][j]);
            }
        }

        unsigned long long  matriz_resposta [ordem_matriz][ordem_matriz];

        for(int i = 0; i < ordem_matriz; i++){
            for(int j = 0; j < ordem_matriz; j++){
                matriz_resposta[i][j] = matriz[i][j] * matriz[i][j];
            }
        }

        int count[ordem_matriz];

        printf("Quadrado da matriz #%d:\n", n);

        for(int i = 0; i < ordem_matriz; i++){
            for(int j = 0; j < ordem_matriz; j++){
                count[j] = formatacao(j ,ordem_matriz, matriz_resposta);
                if(j == 0){
                    printf("%*llu", count[j], matriz_resposta[i][j]);
                }
                else{
                    printf("%*llu", count[j] + 1, matriz_resposta[i][j]);
                }
                
        }
        printf("\n");
    }
    printf("\n");

    n++;

    faltantes--;
    
        
    }while(faltantes > 0);

    return 0;
}