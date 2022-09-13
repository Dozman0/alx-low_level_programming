#include "main.h"

/**
 * main - function that prints ten times the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void) /*print alphabet function*/
{
	int alphabet;
	int count;


	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;
		_putchar('\n');
	}


}
