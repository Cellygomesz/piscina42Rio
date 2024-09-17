/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:35:41 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/09/17 09:55:34 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("what should be displayed: %d\n", ft_strncmp("love", "lovero", 7));
	printf("what should be displayed: %d\n", strncmp("love", "lovero", 7));
	printf("what should be displayed: %d\n", ft_strncmp("flower", "flower", 6));
	printf("what should be displayed: %d\n", strncmp("flower", "flower", 6));
	printf("what should be displayed: %d\n", ft_strncmp("flower", "fl", 2));
	printf("what should be displayed: %d\n", strncmp("flower", "fl", 2));
	return (0);
}*/
/*This function will compare, character by character, the two parameters 
 provided, like the strcmp function, except that it will compare up to 
 a number of characters.*/
