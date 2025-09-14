#include <stdio.h>

int main () {
    int testes;

    scanf("%d", &testes);

    int tentativa = 0;

    while(testes > 0){
    
    tentativa++;

    int sudoku[9][9];
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &sudoku[i][j]);
        }
    }

    int soma = 45; //soma de todos algarismos

    int cinco = 1;
    int jogo_valido = 1; //flag pra jogo valido
    

    for(int j = 0; j < 9; j++){ //soma das colunas
        int soma_coluna = 0; //reseta com nova coluna
        for(int i = 0; i < 9; i++){
            if(sudoku[i][j] != 5){
                cinco = 0;
            }
            soma_coluna += sudoku[i][j]; //todos elementos da coluna
        }

        if(soma_coluna != soma){
            jogo_valido = 0;
            break;
        }

    }


    for(int i = 0; i < 9; i++){ //soma das linhas
        int soma_linha = 0; //reseta com nova linha
        for(int j = 0; j < 9; j++){
            soma_linha += sudoku[i][j]; //todos elementos da coluna
        }

        if(soma_linha != soma){
            jogo_valido = 0;
            break;
        }

    }


    int c = 0; //offset colunas

    while(c < 9){
        int l = 0; //offset linhas
        while(l < 9){
            int soma_quadrado = 0;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    soma_quadrado += sudoku[l + i][c + j];
                }
            }
            if(soma_quadrado != soma){
                jogo_valido = 0;

            }

            l += 3;
        }

        c += 3;

    }

    if(jogo_valido == 0 || cinco = 1){
        if(testes == 1){ //ultimo caso
            printf("Instancia %d\nNAO\n", tentativa);
        }
        else{
            printf("Instancia %d\nNAO\n\n", tentativa);
        }
     // proxima matriz
    }

    else{
        if(testes == 1){ //ultimo caso
            printf("Instancia %d\nSIM\n", tentativa);
        }
        else{
            printf("Instancia %d\nSIM\n\n", tentativa);
        }
    }

    testes--;

    }

    return 0;
}