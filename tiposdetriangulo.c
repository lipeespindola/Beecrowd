#include <stdio.h>
#include <stdlib.h>

int main() {
    
    double a, b, c, A, B, C;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a >= b && a >= c) {
        A = a;
        B = (b >= c) ? b : c;
        C = (b >= c) ? c : b;
        
    } else if (b >= a && b >= c) {
        A = b;
        B = (a >= c) ? a : c;
        C = (a >= c) ? c : a;
        
    } else {
        A = c;
        B = (a >= b) ? a : b;
        C = (a >= b) ? b : a;
    }

    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        
        if (A * A == B * B + C * C)
            printf("TRIANGULO RETANGULO\n");
        else if (A * A > B * B + C * C)
            printf("TRIANGULO OBTUSANGULO\n");
        else if (A * A < B * B + C * C)
            printf("TRIANGULO ACUTANGULO\n");


        if (A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A == B || B == C || A == C)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
