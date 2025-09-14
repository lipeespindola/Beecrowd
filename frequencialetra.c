#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main () {
    int testes;

    scanf("%d", &testes);

    while(testes-- > 0){
        char frase[201];

        fgets(frase, sizeof(frase), stdin);
        getchar();

        int freq[26];
        
        for(int i = 0; i < 26; i++){
            freq[i] = 0;
        }

        for(int i = 0; i <= strlen(frase); i++){
            if(isalpha(frase[i])){ //if é uma caractere
                char c = tolower(frase[i]);
                freq[c - 'a']++; //incrementa as frequencias das letras
            }
        }
        int maior = freq[0];
        for(int i = 0; i < 26; i++){
            if(freq[i] > maior){
                maior = freq[i];
            }
        }

        for(int i = 0; i < 26; i++){
            char c1 = 'a' + i;
            if(freq[i] == maior){
                printf("%c", c1);
            }
        }

        
    }

    return 0;
}