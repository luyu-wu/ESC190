#include <stdio.h>

void set(int a){
    a = 10;
}

int main() {
    printf("Question 1\n");
    int a = 5;
    printf("%d\n",a);
    set(a);
    printf("%d\n",a);
    return 0;
}
