int ft_abs(int start, int end)
{
	int i;

	i = start - end;
	if( i <0)
		i *= -1;
	return (i + 1);
}

int	*ft_range(int start, int end)
{
	int i;
	char *ch;

	i = 0;
	ch = char* malloc(sizeof(char) ft_abs(start,end) + 1);
	while(start > end)
	{
		ch[i] = start;
		start--;
		i++;
	}
	while(start < end)
	{
		ch[i] = start;
		start++;
		i++;
	}
	ch[i] = start;
	return (ch);
}
