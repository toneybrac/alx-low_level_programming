#include "main.h"
#include <stdarg.h>
/**
 * printf_char - prints a char.
 * @val: arguements.
 * return: 1.
*/
int printf_char(va_list val){
    char str;

    str = va_arg(val, int);
    _putchar(str);
    return (1);
}