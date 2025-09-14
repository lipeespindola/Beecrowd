#include <stdio.h>
int main () {

int N, x;

scanf("%d", &N);

do{
    scanf("%d", &x);

    if (x == 0){
        printf("NULL\n");
    }
    else if(x % 2 == 0){
        printf("EVEN ");
    }
    else {
        printf("ODD ");
    }

    if(x > 0) {
        printf("POSITIVE\n");
    }
    else if (x < 0) {
        printf("NEGATIVE\n");
    }
    N--;
    
    }while(N != 0);

return 0;

}


