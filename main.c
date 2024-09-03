#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

/*
Pointers are nothing but a number.
A number that represent the address of the item being pointer to.
There are three main types of pointers:
data ptr, function ptr, void ptr
*/

int example_add_function(const int a, const int b)
{
    return a + b;
}

void main()
{
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

    // char c = 'C';
    // char *ptr_c;
    // ptr_c = &c;
    // printf("ptr_c data : %c\n", *ptr_c);

    /***** Simple Pointers Example w/ Char (End) *****/


    /***** Pointer to Pointer Example (Begin) *****/

    // int i = 10;
    // int *ptr_i = &i;    // first pointer

    // int **ptr_ptr_i = &ptr_i; // second pointer

    // int ***ptr_ptr_ptr_i = &ptr_ptr_i; // second pointer

    // printf("i address : %p\n", &i);
    // printf("ptr_i pointing to address : %p\n", ptr_i);

    // printf("ptr_i address : %p\n", &ptr_i);
    // printf("ptr_ptr_i pointing to address : %p\n", ptr_ptr_i);

    // printf("ptr_ptr_i address : %p\n", &ptr_ptr_i);
    // printf("ptr_ptr_ptr__i pointing to address : %p\n", ptr_ptr_ptr_i);

    /***** Pointer to Pointer Example (End) *****/


    /***** Array to Pointer Example (Begin) *****/

    // char *p[3];     // declare pointer array of type char

    // for (int i=0; i<3; i++) {
    //     p[i] = (char *)malloc(1);
    //     printf("p[%d]: %p\n", i, p[i]);
    // }

    // *p[1] = 1;
    // printf("p[1] : %d\n", *p[1]);

    // for (int i=0; i<3; i++) {
    //     free(p[i]);
    // }

    /***** Pointer to Pointer Example (End) *****/


    /***** Function Pointer Example (begin) *****/

    //(int)(*example_add_function)(1, 1);  how to call funciton pointer
    //printf("%d\n",(int)(*example_add_function)(1, 1));

    /***** Function Pointer Example (end) *****/


    /***** Void Pointer Example (begin) *****/

    // int i = 10;
    // char c = 'S';
    // void *ptr_void;

    // ptr_void = &i;
    // printf("ptr_void : %d\n", *(int*)ptr_void);

    // ptr_void = &c;
    // printf("ptr_void : %c\n", *(char*)ptr_void);

    /***** Void Pointer Example (end) *****/

}

    /***** C++ Pointer Example in Function Calls (begin) *****/

    // void example_pass_reference_function(int &i)
    // {
    //     i = 10000;
    // }

    // void example_pass_pointers_function(int *i)
    // {
    //     *i = 11111;
    // }

    // int main()
    // {
    //     int i = 10;
    //     example_pass_reference_function(i);  // pass in by reference
    //     std::cout << i << std::endl;

    //     example_pass_pointers_function(&i); // pass in by pointer
    //     std::cout << i << std::endl;

    //     return 0;
    // }


    /***** C++ Pointer Example in Function Calls (end) *****/