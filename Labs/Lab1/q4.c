#include <stdio.h>

void insertion_sort(int *arr, int arr_length) {
    for (int i = 1; i<arr_length;i++) {
        for (int ii = 0; ii < i; ii++) {
            //printf("Compare index %d %d\n",i,ii);
            if (arr[i]<arr[ii]) {
                //printf("Swap value %d %d\n",arr[i],arr[ii]);
                int temp = arr[i];
                arr[i] = arr[ii];
                arr[ii] = temp;
            
            }
        }
    }
}

int main(){
    int arr[] = {2,3,2,8,6,3,5,1,2,5,11};
    insertion_sort(arr,11);

    for (int i = 0; i<7;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
