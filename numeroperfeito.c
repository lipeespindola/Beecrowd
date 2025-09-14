#include <stdio.h>

int main () {

int N;

scanf("%d", &N);

do{
    int x;
    scanf("%d", &x);
    int total = 0;
    for(int i = 1; i < x; i++){
        if(x % i == 0){
            total += i;
        }
    }
    if (total == x) {
        printf("%d eh perfeito\n", x);
    }
    else {
        printf("%d nao eh perfeito\n", x);
    }
    N--;
}while(N != 0);


return 0;

}