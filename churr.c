#include <stdio.h>
#include <stdlib.h>

struct spec {
    char peca_carne[21];
    int validade;
};

int comparar_validade(const void *a, const void *b) {
    const struct spec *x = (const struct spec *)a;
    const struct spec *y = (const struct spec *)b;
    return x->validade - y->validade;
}

int main() {

    while(1){

    int nums;
    scanf("%d", &nums);

    if(nums == -1){
        break;
    }

    struct spec carnes[nums];
    for (int i = 0; i < nums; i++) {
        scanf("%s %d", carnes[i].peca_carne, &carnes[i].validade);
    }

    // 🧠 Aqui o qsort:
    qsort(carnes, nums, sizeof(struct spec), comparar_validade);

    for (int i = 0; i < nums; i++) {
        if(i == nums - 1){
            printf("%s\n", carnes[i].peca_carne);
        }
        else{
        printf("%s ", carnes[i].peca_carne);
        }
    }
    }

    return 0;
}
