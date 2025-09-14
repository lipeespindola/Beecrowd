#include <stdio.h>

void fibo(int n1){
    int x = 0;
    int y = 1;

    if(n1 == 1){
        printf("%d\n", x);
    }
    else {
        printf("%d ", x);
    }

    for(int i = n1 - 1; i > 0; i--){
        if(i == 1){
            printf("%d\n", y);
        }
        else{
            printf("%d ", y);  
        }
        int temp = y;
        y = y + x;
        x = temp;
    }
}

int main () {
    int n;

    scanf("%d", &n);
    fibo(n);

}