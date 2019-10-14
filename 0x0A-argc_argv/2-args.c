#include <stdio.h>
/**
 * main - print the arguments received
 * @argc: variable
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
