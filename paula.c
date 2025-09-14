#include <stdio.h>


int main () {

    int testes;

    scanf("%d", &testes);

    while(testes-- > 0){

        char sequencia[4];

        scanf("%s", sequencia);

        int a = sequencia[0] - '0';
        int b = sequencia[2] - '0';


        int total = 0;

        if(a == b){
            total = a * b;
        }

        else{

            char c = sequencia[1];

            if (c >= 'A' && c <= 'Z') { // maiuscula
                total = b - a;
            }

            else if (c >= 'a' && c <= 'z') { //minuscula
                total = a + b;
            }
        }

        printf("%d\n", total);
    }

    return 0;

}