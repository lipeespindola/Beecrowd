#include <stdio.h>
#include <stdlib.h>

typedef struct listano{

    int valor;
    struct listano* next;

}ListaNo;

typedef struct nodehead{
    ListaNo* head;
}Lista;


Lista* cria_lista(int n){

    Lista* p;
    p = (Lista*) malloc(sizeof(Lista)); //lista iniciada
    p->head = NULL;

    return p; //ponteiro pra inicio da lista
}

void insere_elementos(Lista* p, int n){
    ListaNo* ptr;

    ptr = (ListaNo*) malloc(sizeof(ListaNo));

    ptr->valor = n;
    ptr->next = p->head; //antiga cabeca da lista
    p->head = ptr;
}

int cartas(Lista* p){

    int valor_restante;

    printf("Discarded cards: 1");

    while(1){

        ListaNo* trav;

        trav = p->head;
        p->head = trav->next;

        if(trav->valor != 1){
            printf(", %d", trav->valor);
        }

        free(trav);

        trav = p->head;

        if(trav->next == NULL){
            valor_restante = trav->valor;
            break;
        }

        while(trav->next != NULL){
            trav = trav->next;
        }   

        trav->next = p->head;

        ListaNo* trav2;

        trav2 = p->head;
        p->head = trav2->next;
        trav2->next = NULL;

    }


    return valor_restante;
}

int main(){

    int n;

    while(1){
        scanf("%d", &n);

        if(n == 0){
            break;
        }
        if(n == 1){
            printf("Discarded cards: \nRemaining cards: 1\n");
            continue;
        }

        Lista *p = cria_lista(n);

        int n_suporte = n;

        while(n_suporte > 0){

            insere_elementos(p, n_suporte);
            n_suporte--;

        }

        int teste = cartas(p);

        printf("\nRemaining card: %d\n", teste);

    }


    return 0;
    
}