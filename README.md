# custom function _printf  
The following is a customized and simplified implementation of the **printf** function in the **C** programming language, which has been named **_printf** This function has been designed to allow printing of formatted output to the standard output of the program. The **_printf** function is capable of handling a variety of format specifiers, such as **%d** to print signed integers, **%s** to print strings, and more.# Files - **main.c**  

- **functions.c**
- **main.h**  
- **_printf**  
- **sterlen.c**  
- **arr_cases.c**  
- **search_fs.c**

## main.h

The **main.h** file contains function declarations, structure definitions, and the inclusion of header files necessary for the operation of the program that implements the **_printf** custom function.

## functions.c
This file contains a set of functions that implement the specific behavior of different format specifiers used in the **_printf** function.
- char cfunct(char *str, va_list arguments) function to add a character to the parent string.
 - char perfunct(char *str, va_list arguments __attribute__((unused))) Function to add a % to the parent string.
 - char add(char *str, char format) Function to add to the parent string.
 - char sfunct(char *str, va_list arguments) Function to add a string to the parent string.
 - function char dfunct(char *str, va_list arguments) Function to add a base 10 number to the parent string.

## _printf.c
The **printf.c** file contains the implementation of the custom function _printf, which is the function in charge of doing formatted printing.

Function description:
int _printf(const char *format, ...)
 * _printf - principal function to print the array
 * @format: string to print
 * Return: return the size of the bufer or str to print

## _strlen.c
The sterlen.c file contains the implementation of two functions: _strlen and powr. Here is a brief description of both functions:

int _strlen(char *s)
 * _strlen - checks the length of a string
 * @s: string
 * Return: length in characters

int powr(int base, int expo)

 * powr - returns the power y of base x
 * @base: base number
 * @expo: exponential
 * Return: Result
 

## arr_cases.c

data *get_cases()

## search_fs.c

int form_h(const char *format, char *str, va_list arguments, data *cases)

 * form_h - process the format string and update the output buffer
 * @format: the format string to process
 * @str: the output buffer to update
 * @arguments: the va_list of arguments
 * @cases: the array of type_cases
 * Return: return 1 if the loop needs to be broken, 0 otherwise

 <code>
<flowchart>
<start>
			<id>s01</id>
			<label>Lamp doesn't work</label>
			<color>pink</color>
			<x>200</x>
			<y>5</y>
			<width>140</width>
			<height>60</height>
</start>
<decision>
			<id>d01</id>
			<label>Lamp plugged in?</label>
			<color>yellow</color>
			<x>230</x>
			<y>110</y>
			<width>70</width>
			<height>70</height>
</decision>
		<end>
			<id>e01</id>
			<label>Plug in lamp</label>
			<color>lightgreen</color>
			<x>400</x>
			<y>110</y>
			<width>140</width>
			<height>60</height>
                        </end>
		<decision>
			<id>d02</id>
			<label>Bulb burned out?</label>
			<color>yellow</color>
			<x>230</x>
			<y>255</y>
			<width>70</width>
			<height>70</height>
                        </decision>
		<end>
			<id>e02</id>
			<label>Replace bulb</label>
			<color>lightgreen</color>
			<x>400</x>
			<y>255</y>
			<width>140</width>
			<height>60</height>
                        </end>
<end>
			<id>e03</id>
			<label>Repair lamp</label>
			<color>lightgreen</color>
			<x>200</x>
			<y>390</y>
			<width>140</width>
			<height>60</height>
</end>
		<link>
			<id>l1</id>
			<source>s01</source>
			<destiny>d01</destiny>
			<color>magenta</color>
		</link>
		<link>
			<id>l2</id>
			<source>d01</source>
			<destiny>d02</destiny>
			<label>Yes</label>
			<color>red</color>
		</link>
		<link>
			<id>l3</id>
			<source>d01</source>
			<destiny>e01</destiny>
			<label>No</label>
			<color>steelblue</color>
		</link>
		<link>
			<id>l4</id>
			<source>d02</source>
			<destiny>e02</destiny>
			<label>Yes</label>
			<color>gold</color>
		</link>
		<link>
			<id>l5</id>
			<source>d02</source>
			<destiny>e03</destiny>
			<label>No</label>
			<color>darkcyan</color>
		</link>
</flowchart>
</code>
