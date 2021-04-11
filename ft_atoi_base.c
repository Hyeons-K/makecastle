/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehykim <jaehykim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 02:24:32 by jaehykim          #+#    #+#             */
/*   Updated: 2021/04/11 23:25:30 by jaehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int		base_valid(char *base)
{
	int		i;
	int		k;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

int		check_length(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char str, char *base)
{
	int k;
	int flag;

	flag = 1;
	k = 0;
 	while( base[k] != '\0')
   	{
		printf("str의 값 %c, base 의 값 %c \n",str,base[k]);
		if (str == base[k])
		{  
			flag = 0;
			break;
		}
		k++;
	}
	return (flag);
}

int	ft_check_pm(char *str , int *i)
{
	int sign;

    while (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v'
            || str[*i] == '\f' || str[*i] == '\r' || str[*i] == ' ')
       *i = *i + 1;
    while (str[*i] == '-' || str[*i] == '+')
    {
        if (str[*i] == '-')
            sign = sign * -1;
			*i = *i + 1;
    }
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int		len;
	int sign;
	int value;
	int i;
	int j;

	i = 0;
	value = 0;
	if (!base_valid(base))
		return 0;
	len = check_length(base);
	sign = ft_check_pm(str , &i);
	while (str[i] != '\0' )
	{	
		if(ft_check_base(str[i], base));
			break ;
		while(str[i] != base[j])
			j++;
		value = value * len;
		value = value + j;
		printf("Value 값 %d\n",value);
		j = 0;
		i++;
	}
	return (sign * value);
}
