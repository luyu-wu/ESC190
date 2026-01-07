#include <stdio.h>

int main (){
    printf("Hello World");

    int x = 100;

    printf("%d\n",x);

    char *prof = "Evan Bentz"; // Char character stored in address. prof stores the address
    // Stores the start of the string memory address, each character follows evenly spaced, ends with \0 as end char
    printf("Project %s\n", prof);

    char c = '@';
    char *p_c = &c;
    printf("%c\n",c);
    printf("%ld\n",p_c); // print the memory address, ld defines how to parse it (long digit)

    int arr[] = {5,10,2};
    arr[0] = 3;
    int arr2[10];

    return 0;
}
