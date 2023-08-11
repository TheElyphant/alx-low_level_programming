#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* 0-positive_or_negative.c */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d \n", n);
	/* your code goes there */
	if (n > 0)
	{
		printf("Is positive \n");
	}
	else if (n < 0)
	{
		printf("Is negative \n");
	}
	else
	{
		printf("Is zero \n");
	}
	return (0);
}
