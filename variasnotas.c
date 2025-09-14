#include <stdio.h>

float n(float x1, float y1){
    float media = (x1 + y1) / 2.0;

    return media;
}


int main () {
    float x, y;
    int i = 1;

    do{
    do{
        scanf("%f", &x);
        if(x < 0 || x > 10) {
            printf("Nota invalida\n");
        }
    }while(x < 0 || x > 10);

    do{
        scanf("%f", &y);
        if(y < 0 || y > 10){
            printf("Nota invalida\n");
        };
    }while(y < 0 || y > 10);

    float media = n(x, y);

    printf("media = %.2f\n", media);

    do{
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &i);
    }while(i != 1 && i != 2);

    }while(i == 1);
    
    return 0;
}