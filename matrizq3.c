#include <stdio.h>
#include <math.h>

int main (){
    int ordem_matriz;

    while(1){ //loop infinito
        scanf("%d", &ordem_matriz);
        if(ordem_matriz == 0){
            break;
        }

        int matriz[ordem_matriz][ordem_matriz];


        for(int i = 0; i < ordem_matriz; i++){
            int exp = i; // a cada linha reseta
            for(int j = 0; j < ordem_matriz; j++){
                matriz[i][j] = pow(2, exp);
                exp++;
            }
        }

        int digitos = 0;
        int coord_maior = ordem_matriz - 1;
        int maior = matriz[coord_maior][coord_maior];
        while(maior > 0){
            maior /= 10;
            digitos++;
        }

        for(int i = 0; i < ordem_matriz; i++){
            for(int j = 0; j < ordem_matriz; j++){
               if(j == 0){
                printf("%*d", digitos, matriz[i][j]); // so formatacao
               }
               else{
                printf("%*d", digitos + 1, matriz[i][j]); //espaco padrao entre numeros + formatacao
               }
                
            }

            printf("\n");
        }
    }

        return 0;
    }
