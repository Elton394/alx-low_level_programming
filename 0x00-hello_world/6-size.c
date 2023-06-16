#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu byte(S)\n", sizeof(char));
	printf("Size of int: %lu byte(S)\n", sizeof(int));
	printf("Size of long int: %lu byte(S)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(S)\n", sizeof(long long int));
	printf("Size of float: %lu byte(S)\n", sizeof(float));
	return (0);
}
