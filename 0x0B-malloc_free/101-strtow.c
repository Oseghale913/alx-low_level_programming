#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Print an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occured, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = stetow("	ALX School	#cisfun		");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
