#include <stdio.h>
		
#include "main.h"
		

		
/**
		
 * main - prints all arguments it receives
		
 * @argc: number of arguments
		
 * @argv: array of arguments
		
 *
		
 * Return: Always 0 (Success)
		
 */
		
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
