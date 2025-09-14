#include <stdio.h>

int main () {
    int count = 0;

    while(count < 3){
        char acao[8];
        int soma = 0;
        int caw_caw = 0;

        while(caw_caw == 0){
            scanf("%s", acao);

            if(acao[0] == 'c' && acao[1] == 'a' && acao[2] == 'w' && acao[3] == '\0'){
                scanf("%s", acao); // lê o segundo "caw"
                printf("%d\n", soma);
                caw_caw = 1;
            } else {
                if (acao[0] == '*') soma += 4;
                if (acao[1] == '*') soma += 2;
                if (acao[2] == '*') soma += 1;
            }
        }

        count++;
    }

    return 0;
}
