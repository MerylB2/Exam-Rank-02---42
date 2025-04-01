#include <stdlib.h>
#include <stdio.h>

void	fprime(int n)
{
	int	prime = 2;

	if (n == 1)
		printf("1");
	while (prime <= n)
	{
		if (n % prime == 0)
		{
			printf("%d", prime);
			if (n != prime)
				printf("*");
			n /= prime;
		}
		else
			prime++;
	}
}

int	main(int ac, char **av)
{
	if (ac >= 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}

