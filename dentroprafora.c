#include <stdio.h>
#include <string.h>

int main(){
    int testes;
    scanf("%d", &testes);
    getchar();

    while(testes-- > 0){

        char frase_input[101];
        scanf("%[^\n]", frase_input);
        getchar();
 //le frase de dentro pra fora

        int len1 = strlen(frase_input); // frase real

        char frase_output[len1 + 1]; //tamanho da string input mais o '\0''
        frase_output[len1] = '\0'; // fim da string

        if(len1 % 2 != 0){ //comportamento se a string tiver numero de letras impar
            int j = (len1 / 2); //metade da string
            for(int i = 0; i <= (len1 / 2); i++){ //primeira metade da string output
                 frase_output[i] = frase_input[j];
                 j--;
            }

            j = len1 - 1; //ultimo elemento
            for(int i = (len1 / 2) + 1; i < len1; i++){
                frase_output[i] = frase_input[j];
                j--;
            }
        }

        else{ //algoritmo pra strings de numero par de letras
            int j = (len1 / 2) - 1;
            for(int i = 0; i < (len1 /2); i++){
                frase_output[i] = frase_input[j];
                j--;
            }

            j = len1 - 1;

            for(int i = (len1 /2); i < len1; i++){
                frase_output[i] = frase_input[j];
                j--;
            }

        }

        printf("%s\n", frase_output);

    }

    return 0;
}