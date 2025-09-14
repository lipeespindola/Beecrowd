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
    
    if(m > 0 && n > 0){
    for(int i = n; i <= m; i++){
        printf("%d ", i);
        soma += i;
    }
    printf("Sum=%d\n", soma);
}
}while(m > 0 && n > 0);

return 0;
}