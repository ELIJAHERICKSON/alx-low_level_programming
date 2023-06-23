#include "main.H"

/**
 * more_numbers _ print more numbers
 */

void  more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 14; j++)
	{
		for (i = 1; i <= 10 i++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
