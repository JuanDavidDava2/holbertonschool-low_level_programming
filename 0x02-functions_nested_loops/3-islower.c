#include"holberton.h"
/*
*@int- no argument
*islower: Returns 1 if c is lowercase
*
*/
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
