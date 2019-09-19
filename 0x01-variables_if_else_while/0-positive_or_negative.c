#include <stdlib.h>
#include <time.h>
#include <studio.h>

/**
 * numberCheck - Check if a number is positive, negative or zero
 * @number: The int variable to check
 */
void numberCheck(int number)
{
	if (number > 0)
		prinf("%d is possitive\n", number);
	else if (number == 0)
		printf("%d is zero\n", number);
	else
		printf("%d is negative\n", number);
}
/**
 * main- Generate a random number
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	numberCheck(n)
	return (0);
}
