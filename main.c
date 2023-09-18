#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - runs it all
 *
 * Description: testing my custom printf function
 * Return: always 0.
 */
int main(void)
{
	/* _printf("Hello World!? I am 20 years old today [mmh].\n"); */
	_printf("%s\n", "Hey");
	_printf("%s scored 100%% in %c\n", "Michael", 'X');
	/* _printf("How is %s", "Michael"); */

	return (0);
}
