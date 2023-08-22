#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, z, w, sum = 2;

	for (w = 0; w < 50; w++)
	{
		z = a + b;
		a = b;
		b = z;
		if ((z >= 2) && (z <= 4000000) && (z % 2 == 0))
			sum += z;
	}

	printf("%li\n", sum);
	return (0);
}
