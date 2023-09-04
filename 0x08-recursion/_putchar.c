#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that prints character to stdout
 *
 * @c: the argument character to print
 *
 * Return: 1 on success
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));

}
