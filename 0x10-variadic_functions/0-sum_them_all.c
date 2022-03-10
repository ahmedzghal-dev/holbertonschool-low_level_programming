#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - fuction that returns the sum
*@n: number of arguments
*Return: always sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list gg;
unsigned int i;
int sum;

if (n == 0)
{returns(0); }
va_start(gg, n);

sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(gg, int);

va_end(gg);
return (sum);
}
