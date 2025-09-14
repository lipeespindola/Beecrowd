#include <stdio.h>

int main () {

    int c, comprada, cada;

    scanf("%d %d %d", &c, &comprada, &cada);

    int total = c * cada;

    if(total > comprada){
        printf("N\n");
    }
    else {
        printf("S\n");
    }

    return 0;
}