/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:56:21 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/31 17:47:37 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			nb *= temp;
			power--;
		}
		return (nb);
	}
}
/*
#include <stdio.h>

int main(void)
{
	int fnb;
	int	fpwr;
	printf("enter number for nb and power: ");
 	scanf("%d %d", &fnb, &fpwr);
 	printf("the result is: %d", ft_iterative_power(fnb, fpwr));
 	return (0);
}*/
