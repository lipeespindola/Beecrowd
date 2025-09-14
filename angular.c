#include <stdio.h>


float x1, x2, y1, y2;

void leponto(){
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
}

int main() {

    leponto();

    float m = (y2 - y1)/(x2 - x1);

    if(x1 == x2){
        printf("Nao eh possivel determinar o coeficiente angular\n");
        return 0;
    }

    printf("%.2f\n", m);

    return 0;

}