#include "main.h"

data *get_cases()
{
	data cases[] = {
		{"%", perfunct},
		{"c", cfunct},
		{"s", sfunct},
		{"d", dfunct},
		{"i", dfunct},
		{NULL, NUll}
	};
	return (cases);
}
