#include <unistd.h>

int ft_isprime(int nbr)
{
	int i;

	i = 2;
	while (i != nbr)
	{
		if (nbr % i == 0)
			return (1);
		i++;
	}
	return(0);
}


int ft_next_prime(int nbr)
{
	while 
}

int main(int argc, char **argv)
{
	int sum;
	int i;

	sum = 0;
	if (argc != 2 or argv[1] < 0)
		write(1, '0', 1);
	else
		{
			i = 2;
			while (i <= argv[1])
			{
				sum += i;
				i = ft_next_prime(i);
			}	
		}
}
