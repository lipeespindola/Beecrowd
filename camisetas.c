#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    char cor[15];//vermelho ou branco
    char tamanho;//p m ou g
}Pessoa;

int main () {
    int camisetas;
    
    while(1){
        scanf("%d", &camisetas);

        if(camisetas == 0) break;

        Pessoa alunos[camisetas];

        for(int i = 0; i < camisetas; i++){
            fgets(alunos[i].nome, 50, stdin);
            int len = strlen alunos[i].nome;
            if(len > 0 && alunos[i].nome[len - 1] == '\n'){
                alunos[i].nome[len - 1] == '\0';
            }
            scanf("%s %c", alunos[i].cor, &alunos[i].tamanho);
            getchar();
        }

        for(int i = 0)
    }
}