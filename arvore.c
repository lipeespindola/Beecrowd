#include <stdio.h>

int main (){
    int largura;

    while(scanf("%d", &largura) != EOF){
        int altura = largura /2 + 3; //
        char arvore[altura][largura];

        int espacos_necessarios = largura /2;
  
        for(int i = 0; i < altura - 2; i++){
            int espacos_esquerda = 0;   
            for(int j = 0; j <= largura / 2; j++){ //lado esquerdo
                if(espacos_esquerda < espacos_necessarios){
                    arvore[i][j] = ' ';
                    espacos_esquerda++;
                }

                else{
                    arvore[i][j] = '*';
                }
             
            }
            espacos_necessarios--;
        }

        int asteriscos_colocados = 0;
        for(int i = 0; i < altura - 2; i++){  
            int nums = 1;
            for(int j = largura /2 + 1; j < largura; j++){ //lado direito
                if(asteriscos_colocados > 0){
                    arvore[i][j] = '*';
                    asteriscos_colocados--;
                }
                else{
                    arvore[i][j] = ' ';
                }
            }
            asteriscos_colocados += nums; //incremento a cada linha pulada
            nums++;
        
        }

        for(int j = 0; j < largura; j++){
            if(j == largura / 2){
                arvore[altura - 2][j] = '*';
            }
            else{
                arvore[altura - 2][j] = ' ';
            }
        }

        for(int j = 0; j < largura; j++){
            if(j == largura / 2 + 1 || j == largura / 2 - 1 || j == largura / 2){
                arvore[altura - 1][j] = '*';
            }
            else{
                arvore[altura - 1][j] = ' ';
            }
        }

        for(int i = 0; i < altura; i++){ 
            for(int j = 0; j <= largura; j++){ 
                if(j == largura - 1){
                    printf("%c\n", arvore[i][j]);
                }
                else{
                    printf("%c ", arvore[i][j]);
                }
             
            }
        }


    }

}