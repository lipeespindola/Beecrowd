#include <stdio.h>

int figurinha(int x1, int y1){

    if(x1 > y1){ //garante que x1 < y1
        int temp = x1;
        x1 = y1;
        y1 = temp;
    }
    while(x1 != 0){ // mdc de a b == mdc de b a%b
        temp = x1;
        x1 = y1 % x1; // assume o resto
        y1 = temp; //assume o menor dos dois
    }
    return ;
}

int main () {
    int n, x, y;

    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        scanf("%d %d", &x, &y);
        int total = figurinha(x, y);
        printf("%d\n", total);
    }
    return 0;
}