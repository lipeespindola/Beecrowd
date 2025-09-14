#include <stdio.h>

void pre(int *nums1){
    int i1 = 0, par[5];
    int i2 = 0, impar[5];

    for(int i = 0; i < 15; i++){
        if(nums1[i] % 2 == 0){
            par[i1] = nums1[i];
            i1++;
            if(i1 == 5){
                for(int j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                i1 = 0;
            }
        }
        else {
            impar[i2] = nums1[i];
            i2++;
            if(i2 == 5){
                for(int j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                i2 = 0;
            }
        }
    }
    for(int j = 0; j < i2; j++){
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    
    // Imprime os pares restantes
    for(int j = 0; j < i1; j++){
        printf("par[%d] = %d\n", j, par[j]);
    }
}

int main () {
    int nums[15];

    for(int i = 0;  i < 15; i++){
        scanf("%d", &nums[i]);
    }
    pre(nums);

    return 0;
}
