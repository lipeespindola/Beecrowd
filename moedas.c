#include <stdio.h>

void primo(int soma){
    int primo = 1;

    for(int i = 2; i < soma; i++){
        if(soma % i == 0){
            primo = 0;
            break;
        }
    }

    if(primo == 0 || soma < 2){ // nao eh primo
        printf("Bad boy! I’ll hit you\n");
    }
    else{ //eh primo
        printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
    }
}


void soma(int numero_moedas, int *valor_moeda, int salto){
    int soma = 0;

    for(int i = 0; i < numero_moedas; i += salto){
        soma += valor_moeda[i];
    }

    primo(soma);

}


int main () {
    int numero_moedas, valor_moedas[20];

    while(scanf("%d", &numero_moedas) != EOF){

        for(int i = 0; i < numero_moedas; i++){
            scanf("%d", &valor_moedas[i]);
        }
    
        int salto;
        scanf("%d", &salto);

        soma(numero_moedas, valor_moedas, salto);

    } 

    return 0;

}