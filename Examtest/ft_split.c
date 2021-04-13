char **ft_split(char *str)
{
	int i;
	int i2;
	int i3;
	char **ch;

	i = 0;
	i2 = 0;
	ch = char** malloc(sizeof(char) * 1000);
	while( str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
	   i++;
	while(str[i] != '\0')
	{
		if(str[i] > 32)
		{
			i3 = 0;
			ch[i2] = char* malloc(sizeof(char)*1000);
			while(str[i] > 32)
			{
				ch[i2][i3] = str[i];
				i++;
				i3++;
			}
			ch[i2][i3] = '\0';
		}
		else			
			i++;
	}
	return (ch);
}
