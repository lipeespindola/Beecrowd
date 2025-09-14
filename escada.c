#include <stdio.h>


int main (){
    int x, y;

    scanf("%d %d", &x, &y);

    int matriz[x][y];

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < x; i++){
        int elemento = 0;
        for(int j = 0; j < y; j++){ //flag de elemento diferente 0
            //percorre toda matriz ate achar primeiro elemento != 0
            if(matriz[i][j] != 0){ //primeiro elemento da linha
                elemento = 1; //tem elemento != 0 na linha
                if(i < x - 1){
                    for(int c = i + 1; c < x; c++){
                        if(matriz[c][j] != 0){
                            printf("N\n"); //nao eh escada
                            return 0;
                        }
                    }
                }

                break;

            }

        
        }

        if(elemento == 0){
            if(i < x - 1){
                for(int c = i + 1; c < x; c++){
                    for(int z = 0; z < y; z++){
                        if(matriz[c][z] != 0){
                            printf("N\n");
                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("S\n");

    
}

