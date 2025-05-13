#include <stdio.h>
/**
 * @brief This program demonstrates the use of string literals and character arrays in C.
 * It shows how to modify a character in a string and the difference between string literals and character arrays.
 * gcc t_string.c -g -o t_string
 */
int main(int argc, char const *argv[])
{
    char *p = "abc";
    //*p = 'a'; // This will cause a segmentation fault because string literals are read-only in C.

    // To modify a string, you should use an array instead:
    char str[] = "abc";
    str[0] = 'A';        // This is valid because str is an array, not a string literal.
    printf("%s\n", str); // Output: Abc
    return 0;
}