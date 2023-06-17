#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to the variable n
 *              and prints the last digit of n along with a corresponding message.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(NULL));  /* Initialize random seed */

	n = rand();  /* Generate a random number */

	lastDigit = n % 10;  /* Extract the last digit of n */

	printf("Last digit of %d is %d", n, lastDigit);

	if (lastDigit > 5)
		printf(" and is greater than 5\n");
	else if (lastDigit == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");

	return (0);
}

