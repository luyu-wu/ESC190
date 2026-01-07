#include <stdio.h>
#include <stdlib.h>

void change_p (int *p_a) {
    *p_a = 1;
}

void change_p_p (int **p) {
    **p = 2;
}

void change_loc (int **p) {
    *p = malloc(sizeof(int)); // set the pointer of p to be a new place
}

void mod_e2(int *p) {
    *(p+2) = 8; // p[2] = 8 has same effect lol
}
int main() {
    int a = 42;
    int *p_a = &a;
    *p_a = 43; // set memory address

    int b = 42;
    p_a = &b;

    printf("%d\n",a);
    change_p(&a);
    printf("%d\n",a);
    a = 42;
    change_p(p_a);

    int **p_p_a = &p_a;

    change_p_p(&p_a);
    change_p_p(p_p_a);

    int arr[] = {5,6,7};
    mod_e2(arr);

    int *p_arr = malloc(sizeof(int)*3);
    mod_e2(p_arr);
    change_p(p_arr);
    for (int i = 0; i < 3; ++i) {
        printf("%d\n",p_arr[i]);
    }
}
