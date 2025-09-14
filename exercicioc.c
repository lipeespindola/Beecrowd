#include <stdio.h>
int p (int x, int y){
    int potencia = 1;
    for(int i = 1; i <= y; i++){
        potencia *= x;    // resultado = resultado * x
    }

    return potencia;
}

int main () {
    int x, y;

    scanf("%d %d", &x, &y);

    if(y < 0){
        printf("Ainda nao lidamos com valores negativos\n");
        return 0;
    }
    
    if (x == 0){
        printf("0\n");
        return 0;
    }
    
    int potencia1 = p(x, y);
    printf("%d\n", potencia1);


    return 0;
}