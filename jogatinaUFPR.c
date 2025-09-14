#include <stdio.h>

int ident(int n1, int ide1){
    int total = 0;

    for(int i = n1; i > 0; i--){
        int id, jo;
        scanf("%d %d", &id, &jo);
        if (ide1 == id && jo == 0){
            total++;
        }
    }
    return total;
    }

int main () {
    int n, ide, resultado;

    while (scanf("%d %d", &n, &ide != EOF){ //Roda multiplos casos de teste até a entrada ser EOF

    resultado = ident(n, ide); // Chama funcao ident

    printf("%d\n", resultado);
    }
    
    return 0;
}