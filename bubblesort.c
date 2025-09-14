#include <stdio.h>
#include <string.h>

#define MAX 100
#define TAM 100

#include <string.h>

#define MAX 100
#define TAM 100

// Retorna 1 se a > b (ordem alfabética), 0 caso contrário
int maior_string(char a[TAM], char b[TAM]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return 0;
        i++;
    }
    // Se chegamos ao fim de uma das strings
    if (a[i] != '\0') return 1; // a é maior (mais longa)
    return 0; // a não é maior
}

void bubble_sort(char v[MAX][TAM], int n) { // n = tamanhp, v = vetor
    char temp[TAM];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (maior_string(v[j], v[j + 1])) { // se for 1 troca
                strcpy(temp, v[j]);
                strcpy(v[j], v[j + 1]);
                strcpy(v[j + 1], temp);
            }
        }
    }
}


int main() {
    char palavras[5][TAM] = {"banana", "abacaxi", "laranja", "uva", "maca"};
    int n = 5;

    bubble_sort(palavras, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}
#include <string.h>

#define MAX 100
#define TAM 100

// Retorna 1 se a > b (ordem alfabética), 0 caso contrário
int maior_string(char a[TAM], char b[TAM]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return 0;
        i++;
    }
    // Se chegamos ao fim de uma das strings
    if (a[i] != '\0') return 1; // a é maior (mais longa)
    return 0; // a não é maior
}

void bubble_sort(char v[MAX][TAM], int n) {
    char temp[TAM];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (maior_string(v[j], v[j + 1])) {
                strcpy(temp, v[j]);
                strcpy(v[j], v[j + 1]);
                strcpy(v[j + 1], temp);
            }
        }
    }
}
fgets(linha, sizeof(linha), stdin);
scanf("%[^\n]", strings[i])


#include <stdio.h>
#include <string.h>

#define MAX 1000
#define TAM 51

typedef struct {
    char nome[TAM];
    char cor[10];
    char tamanho;
} Pessoa;

// Retorna 1 se a > b (ordem alfabética), 0 caso contrário
int maior_string(char a[TAM], char b[TAM]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return 0;
        i++;
    }
    // Se chegou ao fim de uma das strings
    if (a[i] != '\0') return 1; // a é maior (mais longa)
    return 0;
}

// Retorna 1 se tamanho a é maior que tamanho b segundo ordem P < M < G
int maior_tamanho(char a, char b) {
    int ordem_a = (a == 'P') ? 1 : (a == 'M') ? 2 : 3;
    int ordem_b = (b == 'P') ? 1 : (b == 'M') ? 2 : 3;
    return ordem_a > ordem_b;
}

// Bubble sort que ordena pelo critério: cor, tamanho, nome
void bubble_sort(Pessoa v[MAX], int n) {
    Pessoa temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            int troca = 0;

            // 1) Cor
            if (maior_string(v[j].cor, v[j + 1].cor)) {
                troca = 1;
            }
            else if (strcmp(v[j].cor, v[j + 1].cor) == 0) {
                // 2) Tamanho
                if (maior_tamanho(v[j].tamanho, v[j + 1].tamanho)) {
                    troca = 1;
                }
                else if (v[j].tamanho == v[j + 1].tamanho) {
                    // 3) Nome
                    if (maior_string(v[j].nome, v[j + 1].nome)) {
                        troca = 1;
                    }
                }
            }

            if (troca) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        getchar();
        if (n == 0)
            break;

        Pessoa pessoas[MAX];

        for (int i = 0; i < n; i++) {
            fgets(pessoas[i].nome, TAM, stdin);
            int len = strlen(pessoas[i].nome);
            if (len > 0 && pessoas[i].nome[len - 1] == '\n')
                pessoas[i].nome[len - 1] = '\0';

            scanf("%s %c", pessoas[i].cor, &pessoas[i].tamanho);
            getchar();
        }

        bubble_sort(pessoas, n);

        for (int i = 0; i < n; i++) {
            printf("%s %c %s\n", pessoas[i].cor, pessoas[i].tamanho, pessoas[i].nome);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

typedef struct {
    char nome[100];
} Pessoa;

int maior_string(Pessoa a, Pessoa b) {
    int i = 0;
    while (a.nome[i] != '\0' && b.nome[i] != '\0') {
        if (a.nome[i] > b.nome[i]) return 1;
        if (a.nome[i] < b.nome[i]) return 0;
        i++;
    }
    if (a.nome[i] != '\0') return 1;
    return 0;
}

void bubble_sort(Pessoa v[], int n) {
    Pessoa temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (maior_string(v[j], v[j + 1])) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

scanf("%[^\n]")