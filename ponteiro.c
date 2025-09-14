#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor = 10;
    int *ptr = &valor;

    printf("Endereco apontado", ptr);
    printf("Conteudo da endereco apontado", *ptr);
    printf("Endereco do ponteiro mesmo", &ptr);

    return 0;
}