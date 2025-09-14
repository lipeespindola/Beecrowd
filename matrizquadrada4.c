#include <stdio.h>

void quadrada(int n1, int matriz[n1][n1]){
 
    int centro = n1 / 3; 

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n1; j++){
            matriz[i][j] = 0;
            if(i == j){
                matriz[i][j] = 2;
            }
            if(i == n1 - 1 - j){
                matriz[i][j] = 3;
            }
            if(i >= centro && j >= centro && i <= n1 - 1 - centro && j <= n1 - 1 - centro){
                matriz[i][j] = 1;
            }
            if(i == n1 / 2 && j == i){
                matriz[i][j] = 4;
            } 
        }
    }

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n1; j++){
            if(j == n1 - 1){
                printf("%d\n", matriz[i][j]);     
            }
            else{
                printf("%d", matriz[i][j]);
            }
            }
        }

}

int main() {
    int n;

    while(scanf("%d", &n) != EOF){
        int matriz[n][n];
        quadrada(n, matriz);
    }
}