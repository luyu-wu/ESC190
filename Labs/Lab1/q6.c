#include <stdio.h>
void seq_replace(int *arr1, unsigned long arr1_sz, int *arr2, unsigned long arr2_sz) {
    for (int a_i = 0; a_i < arr1_sz; a_i++) {
        for (int b_i = 0; b_i < arr2_sz; b_i++) {
            if (*(arr1 + a_i) == arr2[b_i]) {
                arr1[a_i] = 0;
            }
        }
    }
}

int main(){
    int a[] = {5, 6, 7, 8, 6, 7};
    int b[] = {6, 7};
    seq_replace(a, 6, b, 2);
    
    for (int i = 0; i < 6; i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}
