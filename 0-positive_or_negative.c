#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int d;
	srand(time(0));
	d = rand() - RAND_MAX / 2;
	if (d > 0)
	{
		printf("%d is positive\n", d);
	}
	else if (d == 0)
	{
		printf("%d is zero\n", d);
	}
	else
	{
		printf("%d is negative\n", d);
	}
	return (0);
}
