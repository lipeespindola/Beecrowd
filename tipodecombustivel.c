#include <stdio.h>

int main() {

int a, alcool = 0, gasolina = 0, diesel = 0;

do {
scanf("%d", &a);

if(a == 1){
alcool++; }

else if (a == 2) {
gasolina++; }

else if (a == 3) {
diesel++; }

} while (a != 4);

printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);

return 0;

}






