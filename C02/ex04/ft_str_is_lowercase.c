/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:54:26 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/23 14:30:36 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("isso deve printar 1: %d\n",ft_str_is_lowercase("abcd"));
	printf("isso deve printar 0: %d\n",ft_str_is_lowercase("AbcD"));
	printf("isso deve printar 0: %d\n",ft_str_is_lowercase("4637"));
	printf("isso deve printar 1: %d\n",ft_str_is_lowercase(""));
	return (0);
}*/
