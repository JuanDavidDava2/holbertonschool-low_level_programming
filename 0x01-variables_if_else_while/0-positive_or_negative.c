#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Generate a random number
 * Return: Always 0 (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (number > 0)
rintf("%d is positive\n", number);
else if (number == 0)
printf("%d is zero\n", number);
else
printf("%d is negative\n", number);
return (0);
}
