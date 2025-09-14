#include <stdio.h>

int main(){

float A, B, C, perimetro, area;
scanf("%f %f %f", &A, &B, &C);

perimetro = (A + B + C);
area = (((A + B) * C) /2.0);

if((A < B + C) && (B < A + C) && (C < A + B)) {
    printf("Perimetro = %.2f\n", perimetro);
}

else {
    printf("Area = %.2f\n", area);
}

    return 0;
}