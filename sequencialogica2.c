#include <stdio.h>

int main () {

int x, y, z = 0;

scanf("%d %d", &x, &y);
int numero;
do {
    for(int i = 1 ; i <= x ; i++){
        numero = (z * x) + i;
        if (i < x){ 
            printf("%d ", numero);
        }
        else {
            printf("%d\n", numero);
            z++;
        }
        


    }


}while (numero != y);

return 0;

}
