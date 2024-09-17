/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:45:18 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/31 17:35:23 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb *= ft_recursive_factorial(nb -1));
}
/*
#include <stdio.h>

int	main(void)
{
	int n;

	printf("enter a value: ");
	scanf("%d", &n);
	printf("the factorial value is: %d", ft_recursive_factorial(n));
	return (0);
}*/
