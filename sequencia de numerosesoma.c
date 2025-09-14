#include <stdio.h>

int main () {

int n, m, temp;

do {
    scanf("%d %d", &n, &m);
    int soma = 0;
    if(n > m){
        temp = n;
        n = m;
        m = temp;
    }
    for(int i = n; i <= m; i++){
        printf("%d ", i);
        soma += i;
    }
    printf("Sum=%d\n", soma);
}while(M > 0 && N > 0);

return 0;
}