/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:04:14 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/27 09:14:58 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test[50] = {"marvin "};
	char	test1[] = {"hates everything"};

	printf("%s\n", ft_strcat(test, test1));
}*/
/*You can concatenate two strings by adding one to the end of the other. 
 The function to do this is strcat. This function will concatenate the 
 second string to the end of the first string.*/
