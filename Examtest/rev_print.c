#include <unistd.h>

int ft_len(char *str)
{
	int i;

	i = 0;
	while( str[i] != '\0')
		i++;
	return(i);
}


char	*rev_print(char *str)
{
	int len;

	len = ft_len(str);
	while( len >0)
	{
		write(1, &str[len], 1);
		len--;
	}
	return (0);
}

int	main(void)
{
	rev_print("");
	write(1, "\n", 1);
	return (0);
}
