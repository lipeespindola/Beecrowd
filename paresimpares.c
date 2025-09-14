#include <stdio.h>

int main() {

int X, positivo = 0, negativo = 0, par = 0, impar = 0, N = 5;
do {
scanf("%d", &X);

if(X % 2 == 0) {
par++;
}
else {
impar++;
}

if(X > 0){
positivo++;
}
else if(X < 0){
negativo++;
}
N--;
}while(N > 0);

printf("%d valor(es) par(es)\n%dvalor(es) impar(es)\n%dvalor(es) positivo(s)\n%dvalor(es) negativo(s)", par, impar, positivo, negativo);

return 0;

}