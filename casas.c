#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int x_casa, y_casa, porcentagem;

    while(scanf("%d %d %d", &x_casa, &y_casa, &porcentagem) == 3){
        int area_casa = x_casa * y_casa;
        int lado_terreno = (int)sqrt(area_casa);

        int lado_terreno_todo = (lado_terreno * 100) / porcentagem;

        printf("%d\n", lado_terreno_todo);
        
    }
    
    return 0;
}