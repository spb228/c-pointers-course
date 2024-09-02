#include <stdio.h>
void main() {
    /***** Simple Pointers Example (Begin) *****/

    // int i = 10;
    // int *ptr_i;     // define pointer
    // ptr_i = &i;     // assign value to pointer
    // printf("ptr_i data : %d\n", *ptr_i);    // dereferencing pointer
    // printf("ptr_i addr : %p\n", ptr_i);
    // printf("i : %p\n", &i);

    // int x = *ptr_i;         // dereferencing pointer
    // printf("x : %d\n", x);

    // *ptr_i = 1000;          // changing value of i through pointer
    // printf("i : %d\n", i);

    /***** Simple Pointers Example (End) *****/

    /***** Simple Pointers Example w/ Char (Begin) *****/

    char c = 'C';
    char *ptr_c;
    ptr_c = &c;
    printf("ptr_c data : %c\n", *ptr_c);

    /***** Simple Pointers Example w/ Char (Begin) *****/
}