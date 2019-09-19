#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* checkNumber - Check if a number is positive, negative or zero
* @number: The int variable to check
*/
void checkNumber(int number)
{
	if (number > 0)
		printf("%d is positive\n", number);
	else if (number == 0)
		printf("%d is zero\n", number);
	else
		printf("%d is negative\n", number);
}
/**
* main - Generate a random number
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	
	rand(time(0));
	n = rand() - RAND_MAX / 2;
	checkNumber(n);
	return (0);
}
