#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string
* Return: stringLength
*/
int _strlen(char *s)
{
	int stringLength = 0;

	while (*s != '\0')
	{
	stringLength++;
	s++;
	}
	return (stringLength);
}
