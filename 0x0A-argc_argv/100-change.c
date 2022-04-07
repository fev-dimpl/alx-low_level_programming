#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int i, co1, co2, re = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]);
	if (co2 < 1)
		printf("0\n");
	else
	{
		for (i = 0; i < 5 && co2; i++)
		{
			co1 = co2 / c[i];
			re += co1;
			co2 -= co1 * c[i];
		}
		printf("%d\n", re);
	}
	return (0);
}
