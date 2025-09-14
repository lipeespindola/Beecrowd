#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char recomendacoes[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", recomendacoes[i]);
    }

    int q;
    scanf("%d", &q);

    char pesquisa[100];
    while (q-- > 0) {
        scanf("%s", pesquisa);
        int count = 0;
        int maior = 0;
        int len_pesquisa = strlen(pesquisa);

        for (int i = 0; i < n; i++) {
            if (strlen(recomendacoes[i]) >= len_pesquisa && 
                strncmp(recomendacoes[i], pesquisa, len_pesquisa) == 0) {
                count++;
                if ((int)strlen(recomendacoes[i]) > maior) {
                    maior = strlen(recomendacoes[i]);
                }
            }
        }

        if (count == 0) {
            printf("-1\n");
        } else {
            printf("%d %d\n", count, maior);
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char recomendacoes[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", recomendacoes[i]);
    }

    int q;
    scanf("%d", &q);

    char pesquisa[100];
    while (q-- > 0) {
        scanf("%s", pesquisa);
        int count = 0;
        int maior = 0;
        int len_pesquisa = strlen(pesquisa);

        for (int i = 0; i < n; i++) {
            if (strlen(recomendacoes[i]) >= len_pesquisa && 
                strncmp(recomendacoes[i], pesquisa, len_pesquisa) == 0) {
                count++;
                if ((int)strlen(recomendacoes[i]) > maior) {
                    maior = strlen(recomendacoes[i]);
                }
            }
        }

        if (count == 0) {
            printf("-1\n");
        } else {
            printf("%d %d\n", count, maior);
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char recomendacoes[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", recomendacoes[i]);
    }

    int q;
    scanf("%d", &q);

    char pesquisa[100];
    while (q-- > 0) {
        scanf("%s", pesquisa);
        int count = 0;
        int maior = 0;
        int len_pesquisa = strlen(pesquisa);

        for (int i = 0; i < n; i++) {
            if (strlen(recomendacoes[i]) >= len_pesquisa && 
                strncmp(recomendacoes[i], pesquisa, len_pesquisa) == 0) {
                count++;
                if ((int)strlen(recomendacoes[i]) > maior) {
                    maior = strlen(recomendacoes[i]);
                }
            }
        }

        if (count == 0) {
            printf("-1\n");
        } else {
            printf("%d %d\n", count, maior);
        }
    }

    return 0;
}