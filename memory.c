#include "monty.h"


/**
 * _memory - main function is to count the number of words
 * @buffer: string to validate in this function
 * Return: the number of words
 */


int _memory(char *buffer)
{
	int i, count = 2;
	char *delim = " ";

	for (i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i] == delim[0])
			count++;
	}
	return (count);
}
