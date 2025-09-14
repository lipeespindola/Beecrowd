#include <stdio.h>

void rep(int *nums1, int n1){
    
    int count = 1;
    for(int i = 0; i < n1 - 1; i++){
        if(i == n1 - 2 && nums1[i] == nums1[i + 1]){
            count++;
            printf("%d apareceu %d vez(es)\n", nums1[i], count);
            break;
        }
        if(nums1[i] == nums1[i + 1]){
            count++;
        }
        else {
            printf("%d apareceu %d vez(es)\n", nums1[i], count);
            count = 1;
        }
    }


}




int main () {
    int n;

    scanf("%d", &n);

    int nums[n];


    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n - 1; i++) { //bubble sort
        for (int j = 0; j < n - 1 - i; j++) { //joga o maior pro final
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
        }
        }    
    }
    rep(nums, n);

    return 0;
}
