#include <stdio.h>



int p (int pa1, int pb1, double g1, double g2){
    int anos = 1;
    for(int i = anos; i <= 100; i++){
        pa1 = pa1 + (g1 /100.0 * pa1);
        pb1 = pb1 + (g2 /100.0 * pb1);
        if (pa1 > pb1){
            anos = i;
            break;   \\sai do loop quando for igual e pega o tempo i que demora
        }
        if (i == 100 && pb1 > pa1){
            anos = 101; \\mais de um seculo
        }
    }
    
    return anos;

}

int main () {
        int n, pa, pb, anos;
        double g1, g2;
        scanf("%d", &n);

        for(int i = n; i > 0 ; i--){
            scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
            anos = p(pa, pb, g1, g2);
            if(anos == 101){ 
                printf("Mais de 1 seculo.\n");
            }
            else {
                printf("%d anos\n", anos);
            }
        }
}