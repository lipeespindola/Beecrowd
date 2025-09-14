#include <stdio.h>


int main () {
    
    char numero[102];

    scanf("%[^\n]", numero);
    for(int i = 0; i < 102; i++){
        if(numero[i] == '\n'){
            numero[i] = '\0';
        }
    }

    int sorte = 1;

    for(int i = 0; i < 102; i++){
        if(numero[i] == '\0'){
            break;
        }
        else if(numero[i] == 49){
            if(numero[i + 1] == 51){
                sorte = 0;
                break;
            } 
        }
    }
 
    if(sorte == 1){
        printf("%s NO es de Mala Suerte\n", numero);
    }
    else{
        printf("%s es de Mala Suerte\n", numero);
    }

    return 0;
}