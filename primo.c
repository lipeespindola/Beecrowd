#include <stdio.h>

void primo(int x1) {
    
    int i = 2;
    while(i < x1) {
        if(x1 % i == 0){
            printf("%d nao eh primo\n", x1);
            break;
        } 
        else {
            i++;
        }
    }
    if(i == x1){
        printf("%d eh primo\n", x1);
    }
    
}


int main () {
    int n, x;

    scanf("%d", &n);

    for(int i = n; n > 0; n--){
        scanf("%d", &x);
        primo(x);

    }
}