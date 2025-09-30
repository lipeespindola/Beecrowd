#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listano{
    char item[20];
    struct listano* next;
    struct listano* ant;
}ListaNo;

typedef struct lista{
    ListaNo* head;
}Lista;

int comp(const void* a, const void* b){

    return strcmp((const char*)a, (const char*)b);
}

Lista* cria() {
    Lista* p;
    p = (Lista*) malloc(sizeof(Lista));
    p->head = NULL;

    return p;
}

void insere(Lista *p, char* item_lido){
    ListaNo* ptr;
    ListaNo* ptr_head;

    ptr = (ListaNo*) malloc(sizeof(ListaNo));

    strcpy(ptr->item, item_lido);
    ptr->next = p->head;
    ptr->ant = NULL;

    ptr_head = p->head;
    if(p->head != NULL){
        ptr_head->ant = ptr;
    }

    p->head = ptr;

}

int delete_repetidos(Lista* p){
    ListaNo* trav;
    ListaNo* trav2;
    ListaNo* trav3;
    ListaNo* trav4;

    int count = 0;

    trav2 = p->head;

    while(trav2 != NULL){
        trav = trav2->next;
        while(trav != NULL){
            if(strcmp(trav->item, trav2->item) == 0){
                trav3 = trav->ant;
                trav4 = trav->next;
                if (trav4 != NULL) {
                    trav4->ant = trav3;
                }
                if (trav3 != NULL) {
                    trav3->next = trav4;
                }
                
                ListaNo* to_free = trav;
                free(to_free);

            }

            trav = trav->next;

        }
        trav2 =  trav2->next;
    }

    trav = p->head;

    while(trav != NULL){
        count++;
        trav = trav->next;
    }

    return count;
}

void copiar_itens(Lista* p, char itens[][20]){

    ListaNo* trav = p->head;

    int idx = 0;

    while(trav != NULL){
        strcpy(itens[idx], trav->item);
        trav = trav->next;
        idx++;
    }

}

int main (){

    int testes;

    scanf("%d", &testes);
    getchar();

    while(testes-- > 0){
        Lista* p = cria();

        char linha[200];
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0'; 

        char* token = strtok(linha, " ");
        while(token != NULL){
            insere(p, token);
            token = strtok(NULL, " ");
        }

        int count = delete_repetidos(p);
        char itens[count][20];
        copiar_itens(p, itens);

        qsort(itens, count, sizeof(itens[0]), comp);

        for(int i = 0; i < count; i++){
            if(i == count - 1) printf("%s", itens[i]);
            else printf("%s ", itens[i]);
        }
        printf("\n");
    }

}