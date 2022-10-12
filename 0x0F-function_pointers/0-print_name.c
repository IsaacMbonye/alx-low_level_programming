#include <stdio.h>
#include "function_poniters.h"

void print_name(char *name, void(*f)(char *))
{
	f(name);
       
}



