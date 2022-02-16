#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	isdouble(char *str, char c, int i)
{
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
			return (1);
		i--;
	}
	return (0);
}

int	main(int argc, char **argv){

	int	i;
	int	j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!(isdouble(argv[1], argv[1][i], i)))
				ft_putchar(argv[1][i]);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!(isdouble(argv[1], argv[2][i], ft_strlen(argv[1]))) && !(isdouble(argv[2], argv[2][i], i)))
			{
				ft_putchar(argv[2][i]);
			}
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
