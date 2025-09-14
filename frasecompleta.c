#include <stdio.h>
#include <string.h>

int main () {
    char alfabeto[27];

    for(int i = 0; i < 26; i++){
        alfabeto[i] = 'a' + i;
    }

    char frase[1001]; //frase falada

    int testes;

    scanf("%d", &testes);
    getchar();

    while(testes-- > 0){
        fgets(frase, 1001, stdin); //pega linha inteira

    // remove o '\n' final, se houver
    int len = strlen(frase);
    if (len > 0 && frase[len - 1] == '\n') {
    frase[len - 1] = '\0'; //sobrescreve \n com \0
    }

        int alfabeto_checagem[26];
        for(int i = 0; i < 26; i++){
            alfabeto_checagem[i] = 0; //flag desativada
        }

        for(int i = 0; frase[i] != '\0'; i++){ // //letras da frase
            for(int j = 0; j < 26; j++){ //letras do alfabeto
                if(frase[i] == alfabeto[j]){ //achou a letra analisada
                    alfabeto_checagem[j] = 1;
                    break; //proxima letra da frase
                }
            }
        }
        int count = 0;

        for(int i = 0; i < 26; i++){
            if(alfabeto_checagem[i] != 0){ //contagem de letras
                count++;
            }
        }

        if(count == 26){
            printf("frase completa\n");
        }
        else if(count >= 13){
            printf("frase quase completa\n");
        }
        else{
            printf("frase mal elaborada\n");
        }

    }

    return 0;
}