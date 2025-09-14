#include <stdio.h>

int escada (int *nums, int n){
    int total = 1;
    
    if(n == 1){
        total = 1;
        return total;
    }

    int diff = nums[1] - nums[0];

    for(int j = 1; j < n - 1 ; j++){
            if(diff != nums[j + 1] - nums[j]){ //nova sequencia
                total++;
                diff = nums[j + 1] - nums[j]; //nova diferenca
            }
    }
        



    return total;
         
    }





int main () {
    int n;

    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    int total = escada(nums, n);

    printf("%d\n", total);

    return 0;
}