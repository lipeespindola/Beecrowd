#include <stdio.h>

int main() {

int X, Y, temp, total = 0;

scanf("%d %d", &X, &Y);

if (Y > X){
    temp = X;
    X = Y;
    Y = temp;
}

for(int i = Y; i <= X; i++) {
    if (i % 13 != 0){
        total += i;
    }
}

printf("%d\n", total);

return 0;

}