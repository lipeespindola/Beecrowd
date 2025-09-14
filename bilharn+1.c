#include <stdio.h>

int main () {

    int c, n, x1, y1, x2, y2, x3, y3

    scanf("%d", &c);

    for(int i = c; i > 0; i--){
        scanf("%d", &n);
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);
        int total = 1;
        for(int j = n - 1; j > 0; j--){
            scanf("%d %d", &x3, &y3);
            if((abs(x2 - x1) * abs(x2 - x1) + abs(y2 - y1) * abs(y2 - y1)) > (abs(x3 - x1) * abs(x3 - x1) + abs(y3 - y1) * abs(y3 - y1))){
                x2 = x3;
                y2 = y3;
                total = n - j + 1;
            }

        }
        printf("%d\n", total);
    }
    return 0;
}