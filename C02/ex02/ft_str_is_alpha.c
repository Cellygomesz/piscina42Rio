/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:02:55 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/26 10:55:00 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	aux(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (!str)
	{
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (aux(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	printf(" resultado e 1 : %d\n", ft_str_is_alpha("nshdAjk"));
	printf(" resultado e 0 : %d\n", ft_str_is_alpha("45"));
	printf(" resultado e 1 : %d\n", ft_str_is_alpha(""));
	printf(" resultado e 0 : %d\n", ft_str_is_alpha("nfk$4fnf"));
}*/
