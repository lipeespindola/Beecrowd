#include <stdio.h>
#include <string.h>

typedef struct produtos{
    char nome[50];
    float preco;
}Produtos;

int main(){
    int testes;
    scanf("%d", &testes);

    while(testes-- > 0){
        int qtd_feira;
        scanf("%d", &qtd_feira);

        Produtos itens_feira[qtd_feira];

        for(int i = 0; i < qtd_feira; i++){
            scanf("%s %f", itens_feira[i].nome, &itens_feira[i].preco);
        }

        float preco_gasto = 0.0;

        int qtd_comprada;
        scanf("%d", &qtd_comprada);
        while(qtd_comprada-- > 0){
            char item_comprado[50];
            int quantidade;

            scanf("%s %d", item_comprado, &quantidade);
            int idx;
            for(int i = 0; i < qtd_feira; i++){
                if(strcmp(item_comprado, itens_feira[i].nome) == 0){
                    idx = i;
                    break;
                }
            }
    
            preco_gasto += (quantidade * itens_feira[idx].preco);

        } 

        printf("R$ %.2f\n", preco_gasto);

    }

    return 0;
}