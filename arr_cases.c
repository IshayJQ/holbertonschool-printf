#include "main.h"

data cases[] = {
	{"%", perfunct},
	{"c", cfunct},
	{"s", sfunct},
	{"d", dfunct},
	{"i", dfunct},
	{NULL, NULL}
};

data *get_cases()
{
	return (cases);
}
