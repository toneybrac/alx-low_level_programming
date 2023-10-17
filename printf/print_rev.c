#include "main.h"

/**
 * print_rev - function that print a string in reverse
 * @val: arguments
 * Return: the string
*/
int print_rev(va_list val){
    char *s = va_arg(val, char*);
    int i;
    int j = 0;

    if (s == NULL)
        s = "(null)";
    while (s[j] != '\0')
        j++;
    for (i = 0; i >= 0; i--)
        _putchar(s[i]);
    return (j);
}
