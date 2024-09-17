/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:09:44 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/08/07 12:21:53 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	i;
	int	*temp;
	int	range;

	i = 0;
	range = max - min;
	if (min >= max)
	{
		temp = NULL;
		return (0);
	}
	temp = (int *)malloc((range) * sizeof(int));
	while (i <= range - 1)
	{
		temp[i] = min;
		min++;
		i++;
	}
	return (temp);
}
/*
int	main(void)
{
	int	vmin = 0;
	int vmax = 200;
	int *rec;

	rec = ft_range(vmin, vmax);
	free(rec);
	return (0);
}*/
