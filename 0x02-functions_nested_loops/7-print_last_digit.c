#include "main.h"
/**
  * print_last_digit - The entry point of the function
  * @r: The number to be checked
  *
  * Description: This is a function that prints the last digit of a number.
  * Return: last_digt
  */
int print_last_digit(int r)
{
	int last_digt;

	if (r < 0)
		last_digt = (r * -1) % 10;
	else
		last_digt = r % 10;
	_putchar(last_digt + '0');
	return (last_digt);
}
