#include <stdio.h>

int main (){
    int testes;

    scanf("%d", &testes);

    while(testes-- > 0){
        char itens[1000][20];

        for(int i = 0; i < 1000; i++){
            scanf("%s", itens[i]);
        }
    }
}