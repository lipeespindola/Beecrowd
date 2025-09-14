#include <stdio.h>

int main() {
    int testes;
    scanf("%d", &testes);

    while (testes-- > 0) {
        char frase_input[51];
        char frase_resposta[51];
        int r = 0;

        scanf("%s", frase_input);

        int i = 0;
        // Pula pontos do início
        while (frase_input[i] == '.' && frase_input[i] != '\0') {
            i++;
        }

        // Se não chegou no fim, pega a primeira letra
        if (frase_input[i] != '\0') {
            frase_resposta[r++] = frase_input[i];
        }

        // Percorre o restante da string
        for (; frase_input[i] != '\0'; i++) {
            if (frase_input[i] == '.') {
                // Pula todos os pontos consecutivos
                while (frase_input[i] == '.') {
                    i++;
                }
                // Adiciona o próximo caractere (se não for fim da string)
                if (frase_input[i] != '\0') {
                    frase_resposta[r++] = frase_input[i];
                }
            }
        }

        frase_resposta[r] = '\0';
        printf("%s\n", frase_resposta);
    }

    return 0;
}