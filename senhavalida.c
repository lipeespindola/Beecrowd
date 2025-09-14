#include <stdio.h>
#include <string.h>

int main(){
    char senha[33];

    while(1){ //loop infinito ate break

        if (scanf("%32[^\n]", senha) != 1) { //numero de itens retornados
            int ch = getchar(); // consome o \n ou EOF
            if (ch == EOF) break;
            continue; //se for \n nao imrpe
        }
        if(strcmp(senha, "EOF") == 0) break;

        if(strlen(senha) < 6){
            printf("Senha invalida.\n");
            continue; //proxima senha
        }

        int maiuscula = 0; //flag letra maiuscula
        for(int i = 0; i < strlen(senha); i++){
            if(senha[i] >= 'A' && senha[i] <= 'Z'){
                maiuscula = 1;
                break;
            }
        }

        int minuscula = 0; //flag letra minuscula
        for(int i = 0; i < strlen(senha); i++){
            if(senha[i] >= 'a' && senha[i] <= 'z'){
                minuscula = 1;
                break;
            }
        }

        int numero = 0; //flag letra numero
        for(int i = 0; i < strlen(senha); i++){
            if(senha[i] >= '0' && senha[i] <= '9'){
                numero = 1;
                break;
            }
        }

        int acentos = 0; //flag acentos e espacos
        for(int i = 0; i < strlen(senha); i++){
            if(!((senha[i] >= '0' && senha[i] <= '9') || (senha[i] >= 'a' && senha[i] <= 'z') || (senha[i] >= 'A' && senha[i] <= 'Z'))){
                acentos = 1; //tem acento ou espaco
                break;
            }
        }


        if(numero == 0 || minuscula == 0 || maiuscula == 0 || acentos == 1){
            printf("Senha invalida.\n");
            continue;
        }

        else{
            printf("Senha valida.\n");
        }
    }

    return 0;
}