#include <stdio.h>

int telescopio(int *estrelas, int area, int n1){

    int total = 0;

    for(int i = 0; i < n1; i++){
        if(estrelas[i] * area >= 40000000){
            total++;
        }
    }

    return total;
}

int main () {
    int area, n;

    scanf("%d", &area);
    scanf("%d", &n);

    int estrelas[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &estrelas[i]);
    }

    int total = telescopio(estrelas, area, n);

    printf("%d\n", total);

    return 0;
}