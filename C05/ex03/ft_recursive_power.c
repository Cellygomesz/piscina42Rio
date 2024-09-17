/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:36:53 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/31 17:55:45 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int fnb;
	int	fpwr;

	printf("enter the value of nb and power: ");
	scanf("%d %d", &fnb, &fpwr);
	printf("the result is: %d\n", ft_recursive_power(fnb, fpwr));
	return (0);
}*/
