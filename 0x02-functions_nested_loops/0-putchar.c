#include "main.h"
/**
 *Write a program that prints _putchar, followed by a new line.
 */
int main(void)
{
	char putchar[] = "_putchar";
        int i = 0;

        while (putchar[i] != '\0')
        {
		_putchar(putchar[i]);
		i++;
        }
 	_putchar('\n');

        return (0);

}
