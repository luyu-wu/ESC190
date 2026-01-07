#include <stdio.h>

void adjust(char *arr) {
    for (int i = 0; i < 10; ++i){
        arr[i] = i;
    }
}
int main() {
    char arr[100];
    adjust(arr);
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",arr[i]);
    }
}
