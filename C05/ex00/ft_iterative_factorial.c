/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:04:22 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/31 17:42:42 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	answer;

	answer = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (answer > 1)
	{
		nb = nb * (answer - 1);
		answer--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	number;

	printf("put any number: ");
	scanf("%d", &number);
	printf("the factorial value is: %d\n", ft_iterative_factorial(number));
	return (0);
}*/
