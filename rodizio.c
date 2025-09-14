#include <stdio.h>

void checagem_dia(char placa[9]){
    if(placa[7] == '1' || placa[7] == '2'){
        printf("MONDAY\n");
    }
    if(placa[7] == '3' || placa[7] == '4'){
        printf("TUESDAY\n");
    }
    if(placa[7] == '5' || placa[7] == '6'){
        printf("WEDNESDAY\n");
    }
    if(placa[7] == '7' || placa[7] == '8'){
        printf("THURSDAY\n");
    }
    if(placa[7] == '9' || placa[7] == '0'){
        printf("FRIDAY\n");
    }
}

int checagem_failure(char placa[9]){
    int prosseguir = 1;
    for(int i = 0; i < 3; i++){
        if(placa[i] < 'A' || placa[i] > 'Z'){
            prosseguir = 0;
            return prosseguir;
        }
    }

    if(placa[3] != '-'){
        prosseguir = 0;
        return prosseguir;
    }

    for(int i = 4; i < 8; i++){
        if(placa[i] < '0' || placa[i] > '9'){
            prosseguir = 0;
            return prosseguir;
        }
    }

    if(placa[8] != '\0'){
        prosseguir = 0;
        return prosseguir;
    }

    return prosseguir;
}

int main () {
    int testes;
    
    scanf("%d", &testes);

    while(testes-- > 0){
        char placa[9];
        scanf("%s", placa);
        
        int prosseguir = checagem_failure(placa);

        if(prosseguir == 0){
            printf("FAILURE\n");
            continue;
        }

        checagem_dia(placa);
    }

    return 0;
}