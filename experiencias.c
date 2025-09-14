#include <stdio.h>

int main () {

int n, q, totalc = 0, totalr = 0, totals = 0, total = 0;
char cobaia;

scanf("%d", &n);

do{
    scanf("%d %c", &q, &cobaia);
    if(cobaia == 'C'){
        totalc += q;
    }
    else if(cobaia == 'R'){
        totalr += q;
    }
    else if(cobaia == 'S'){
        totals += q;
    }
    total += q;
    n--;

}while (n > 0);

float pc = (totalc * 100.0 / total);
float pr = (totalr * 100.0 / total); 
float ps = (totals * 100.0 / total);

printf("Total : %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %\nPercentual de ratos: %.2f %\nPercentual de sapos: %.2f %\n", total, totalc, totalr, totals, pc, pr, ps);

return 0;
}