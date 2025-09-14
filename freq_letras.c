#include <stdio.h>

int main () {
    int testes;

    scanf("%d", &testes);
    char strings[testes][200];
    int i = 0;
    while(testes-- > 0){
        getchar();
        scanf("%[^\n]", strings[i]);
        char vetor_count[26];
        for(int c = 0; c < 26; c++){
            vetor_count[c] = 0;
        }
        for(int c = 0; c < 200; c++){
            if(strings[i][c] == '\0') break;
            for(int j = 65; j < 91; j++){
                if(strings[i][c] == j || strings[i][c] == j + 32){
                    vetor_count[j - 65]++;
                }
            }
        }

        int maior = vetor_count[0];

        for(int c = 0; c < 26; c++){
            if(vetor_count[c] > maior){
                maior = vetor_count[c];
            }
        }
        char string_resposta[26];
   
        int z = 0;
        for(int c = 0; c < 26; c++){
            if(vetor_count[c] == maior){
                printf("%c", c + 'a');
            }
        }

        printf("\n");

        i++;
    }

    return 0;
}