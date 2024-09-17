/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 07:32:16 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/08/08 09:07:49 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*temp;

	i = 0;
	while (src[i])
		i++;
	temp = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (temp == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			temp[i] = src[i];
			i++;
		}
		temp[i] = '\0';
	}
	return (temp);
}
/*
#include <stdio.h>
#include <string.h>

int main(void) {

    char *original = "Hello, world!";
    char *copia;

    copia = ft_strdup(original);

    printf("Original: %s\n", original);
    printf("Cópia: %s\n", copia);

	free(copia);
	return (0);
}*/
