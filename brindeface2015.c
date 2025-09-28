#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listano{
    char palavra[16];
    struct listano *next;
    
}ListaNo;

typedef struct Lista{
    struct listano *head;
}Lista;

char feca[8] = "F E C A";
int count = 0;

Lista* cria(){
    Lista* p;

    p = (Lista*) malloc(sizeof(Lista));
    p->head = NULL;

    return p;
}

void insere_palavra(Lista* p, char* palavra_participante){
    ListaNo* ptr;

    ptr = (ListaNo*) malloc(sizeof(ListaNo));

    strcpy(ptr->palavra, palavra_participante);
    ptr->next = p->head;

    p->head = ptr;

}

void delete(Lista *p){

    ListaNo* trav;
    trav = p->head;
    p->head = trav->next;
    free(trav);

    trav = p->head;
    p->head = trav->next;
    free(trav);

    if(p->head == NULL){
        insere_palavra(p, feca);
    }

}

void check_palavra(Lista *p){
    ListaNo* trav;
    ListaNo* trav2;

    trav2 = p->head;

    trav = trav2->next;

    int equal_flag = 1;

    for(int i = 0; i < 7; i += 2){
        int j = 7 - i;

        if(trav2->palavra[i] != trav->palavra[j]){
            equal_flag = 0;
            break;
        }
    }
    
    if(equal_flag == 1){
        delete(p);
        count++;
    }
}

int main() {

    int n;

    scanf("%d", &n);
    getchar();

    Lista* p = cria();

    insere_palavra(p, feca);


    char palavra_participante[n][8];

    for(int i = 0; i < n; i++){

        fgets(palavra_participante[i], sizeof(palavra_participante[i]), stdin);
        palavra_participante[i][strcspn(palavra_participante[i], "\n")] = '\0';

        insere_palavra(p, palavra_participante[i]);

        check_palavra(p);

    }

    printf("%d\n", count);

    return 0;

}