#include <stdio.h>

int pre(int *album1, int *carimbadas1, int *compradas1, int c1, int m1){

    int total = c1;
    int faltantes[c1];
    for(int i = 0; i < c1; i++){
        faltantes[i] = 0; //carimbadas nao achadas
    }
    for(int i = 0; i < c1; i++){
        int j = 0;
        while(j < m1){
            if(compradas1[j] == carimbadas1[i] && faltantes[i] == 0){
                total--;
                faltantes[i] = 1;
            }
            j++;
        }
    }
    return total;
}






int main() {
    int n;
    int c;
    int m;

    scanf("%d %d %d", &n, &c, &m);

    int carimbadas[c];
    int compradas[m];

    for(int i = 0; i < c; i++){
        scanf("%d", &carimbadas[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &compradas[i]);
    }

    int total = pre(album, carimbadas, compradas, c, m);

    printf("%d\n", total);

    return 0;
}