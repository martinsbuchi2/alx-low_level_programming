#include <stdio.h>
		
#include "main.h"
		

		
/**
		
 * main - print the number of arguments passed to the program
		
 * @argc: number of arguments
		
 * @argv: array of arguments
		
 *
		
 * Return: Always 0 (Success)
		
 */
		

		
int main(int argc, __attribute__((unused)) char *argv[])
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
