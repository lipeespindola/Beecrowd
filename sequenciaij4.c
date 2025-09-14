#include <stdio.h>

int main() {
    float x = 0.0, y = 1.0;
    int x1 = 0, y1 = 1; 

    for(float i = x; i < 2.2; i += 0.2){  
        if (i == 0.0 || i == 1.0 || (i > 1.9 && i < 2.1)){ //erro de arredondamento float +0.2
            printf("I=%d J=%d\n", x1, y1 + x1);
            printf("I=%d J=%d\n", x1, y1 + 1 + x1);
            printf("I=%d J=%d\n", x1, y1 + 2 + x1);
            x1++;
        }
        else {
            printf("I=%.1f J=%.1f\n", i, y + i);
            printf("I=%.1f J=%.1f\n", i, y + 1.0 + i);
            printf("I=%.1f J=%.1f\n", i, y + 2.0 + i);
        }
    }

    return 0;
}