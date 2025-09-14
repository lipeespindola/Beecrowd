#include <stdio.h>

int main () {
    int n;

    while(scanf("%d", &n) != 0){
        if(n == 0){
            break;
        }
        int matriz[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int pot_2 = j; //
                int numero = i + 1; //primeiro numero da linha
                while(pot_2 > 0){
                    numero *= 2;
                    pot_2--;
                }
                matriz[i][j] = numero;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if (j == 0)
                    printf("%1d", matriz[i][j]);  // sem espaço antes do primeiro

                else
                    printf(" %1d", matriz[i][j]); // com espaço entre colunas
                }   
                printf("\n");  // Fim da linha
        }
        
    }

    return 0;
}
