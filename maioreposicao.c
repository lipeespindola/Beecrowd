#include <stdio.h>

int main() {

int x, y, temp, n = 99, p, i = 1;

scanf("%d", &x);
p = 1;
do {
    scanf("%d", &y);
    i++;
    if (y > x){
        x = y;
        p = i;
    }
    n--;
    
}while (n > 0);

printf("%d\n%d\n", x, p);

return 0;


}