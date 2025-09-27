#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // se for positivo TROCA os dois
}

int main() {

    int n;

    scanf("%d", &n);

    int n_suporte = n;

    int pares[n];
    int impares[n];
    int idx_par = 0;
    int idx_impar = 0;

    while(n_suporte-- >0){
        int numero;

        scanf("%d", &numero);

        if(numero % 2 == 0){
            pares[idx_par] = numero;
            idx_par++;
        }

        else{
            impares[idx_impar] = numero;
            idx_impar++;
        }

    }

    qsort(pares, idx_par, sizeof(int), comp);
    qsort(impares, idx_impar, sizeof(int), comp);

    for(int i = 0; i < idx_par; i++){
        printf("%d\n", pares[i]);
    }

    for(int i = idx_impar - 1; i >= 0; i--){
      
        printf("%d\n", impares[i]);
        
    }

    return 0;


}