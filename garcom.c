#include <stdio.h>

int main () {
    
    int n, c, l, total = 0;

    scanf("%d", &n);

    for(int i = n; n > 0; n--){
        scanf("%d %d", &l, &c);
        if(l > c){
            total = total + c;
        }
    }
    printf("%d\n", total);

    return 0;
}