#include <stdio.h>

int len (char* p_s){
    int cont = 0;
    while (cont >= 0) {
        if (*(p_s+cont)=='\0') {
            break;
        } else {
            cont = cont+1;
        }
    }
    printf("%d\n",cont);
    return cont;
}

int main () {
    char test[] = "Hellooo";
    len(test);
    char test2[] = "Hello";
    len(test2);

}