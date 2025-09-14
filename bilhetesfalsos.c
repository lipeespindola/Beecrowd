#include <stdio.h>

int rep(int *ingressos1, int m1){

    int count = 0; //numeros de ingressos clonados

    for(int i = 0; i < m1 - 1; i++){
        int repetido = 0;
        for(int k = 0; k < i; k++){ // verifica se ele ja foi contado 
            if(ingressos1[i] == ingressos1[k]){
                repetido = 1;
                break;
            }

        }

        if(repetido) continue; // proximo ingresso na lista;
        
        for(int j = i + 1; j < m1; j++) { // olha pros proximos ingressos
            if(ingressos1[i] == ingressos1[j]){
                count++;
                break;
            }

        }     
    }
    return count;
}

int main () {
    int n, m;

    do{
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) break;
        int ingressos[m];
        for(int i = 0; i < m; i++){
            scanf("%d", &ingressos[i]);
        }
        int total = rep(ingressos, m);
        printf("%d\n", total);
    }while(n != 0 && m != 0);

    return 0;
}