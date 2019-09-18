/**
*main- Entry point
*
* Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
	printf("Size of int data type : %i byte(s)\n", (int) sizeof(int));
	printf("Size of char data type : %i byte(s)\n", (int) sizeof(char));
	printf("Size of float data type : %i byte(s)\n", (int)  sizeof(float));
	printf("Size of double data type : %i byte(s)\n", (int) sizeof(double));
	return (0);
}
