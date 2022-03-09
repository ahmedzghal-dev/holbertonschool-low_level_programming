#include "function_pointers.h"
#include <stddef.h>
/**
*print_name - check the code
*@name: the name
*@f: pointer to a fuction that print's the name
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}