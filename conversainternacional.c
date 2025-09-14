#include <stdio.h>
#include <string.h>

int main () {
    int testes;

    scanf("%d", &testes);

    while(testes-- > 0){
        int numero_falantes;

        scanf("%d", &numero_falantes);
        numero_falantes--;

        char falante1[20];
        char falante2[20];
        int ingles = 0; //enquanto tudo for igual = lingua do falante

        scanf("%s", falante1);

        do{
            scanf("%s", falante2);
            for(int i = 0; i < 20; i++){ //checagem cada letra
                if(falante1[i] != falante2[i]){
                    ingles = 1;
                    break;
                }
            }
            numero_falantes--;
        } while(numero_falantes > 0);

        if(ingles == 1){
            printf("ingles\n");
        }
        else{
            printf("%s\n", falante1);
        }

    }

    return 0;
}