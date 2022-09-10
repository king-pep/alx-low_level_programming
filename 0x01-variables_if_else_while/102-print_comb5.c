#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program that prints all possible combinations of two
  * two-digit numbers.
  * Return: 0
  */
int main(void)
{
	int first_numm, second_numm;

	first_numm = 0;
	while (first_numm < 100)
	{
		second_numm = 0;
		while (second_numm < 100)
		{
			if (first_numm < second_numm)
			{
				putchar((first_numm / 10) + 48);
				putchar((first_numm % 10) + 48);
				putchar(' ');
				putchar((second_numm / 10) + 48);
				putchar((second_numm % 10) + 48);
				if (first_numm != 98 || second_numm != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second_numm++;
		}
		first_numm++;
	}
	putchar('\n');
	return (0);
}
