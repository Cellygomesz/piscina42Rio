/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:52:25 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/27 12:12:55 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("the return is: %d\n", ft_strcmp("flower", "flower"));
	return (0i);
}*/
/*This function compares, character by character, the two parameters provided.
-1 indicating that parameter 1 is less than parameter 2;
0 indicating that the parameters are equal;
1 if the first is greater than the second parameter.*/
