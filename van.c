#include <stdio.h>
#include <string.h>

typedef struct aluno{
    char nome[50];
    char regiao;
    int custo;
}Aluno;


int comp1(const void* a, const void* b) {
    const Aluno* p1 = (const Aluno*)a;
    const Aluno* p2 = (const Aluno*)b;

    if (p1->custo != p2->custo)
        return p1->custo - p2->custo; // crescente
    if (p1->regiao != p2->regiao)
        return p1->regiao - p2->regiao; // crescente por char
    return strcmp(p1->nome, p2->nome);   // crescente lexicográfica
}



int main (){

    int n;
    
    
    while(scanf("%d", &n) != EOF){

    getchar();

    Aluno pessoas[n];

    for(int i = 0; i < n; i++){
        scanf("%s", pessoas[i].nome);

        scanf(" %c", &pessoas[i].regiao);

        scanf("%d", &pessoas[i].custo);
        getchar();
    }

    qsort(pessoas, n, sizeof(Aluno), comp1);
    
    for(int i = 0; i < n - 1; i++){
        int j = i + 1;
        Aluno temp;

        if(pessoas[i].custo == pessoas[j].custo && pessoas[i].regiao == pessoas[j].regiao){
                    if(strcmp(pessoas[i].nome, pessoas[j].nome) > 0){
                        temp = pessoas[i];
                        pessoas[i] = pessoas[j];
                        pessoas[j] = temp;
                    }
        }
        else if(pessoas[i].custo == pessoas[j].custo){
            if(pessoas[i].regiao > pessoas[j].regiao){
                temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%s\n", pessoas[i].nome);
    }
    }


    return 0;

}