#include "function_pointers.h"
/*
 * print_name - prints a name
 * @name: name of person
 * @f: function pointer point to function hat print name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	(*f)(name);
}

