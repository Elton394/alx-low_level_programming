#include <stdio.h>
/**
* print_array - a function that prints n elements of an array
* @a: array nameii
* @n: is the number of elements of the array to be printed
*/
void print_array(int *a, int n)
{
	int indexArr;

	for (indexArr = 0; indexArr < n; indexArr++)
	{
		printf("%d", a[indexArr]);
		if (indexArr != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
