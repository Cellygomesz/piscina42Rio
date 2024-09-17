/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:09:51 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/23 14:28:51 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("aqui deve ser printado 0 : %d\n", ft_str_is_uppercase("abcd"));
	printf("aqui deve ser printado 1 : %d\n", ft_str_is_uppercase("AFGJ"));
	printf("aqui deve ser printado 0 : %d\n", ft_str_is_uppercase("5234"));
	printf("aqui deve ser printado 1 : %d\n", ft_str_is_uppercase(""));
	printf("aqui deve ser printado 0 : %d\n", ft_str_is_uppercase("ahdA"));
	printf("aqui deve ser printado 0 : %d\n", ft_str_is_uppercase("AESd"));
	return (0);
}*/
