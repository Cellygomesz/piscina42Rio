/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:53:11 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/24 23:24:30 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("antes da troca: x = %d y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("depois da troca: x = %d y = %d\n", x, y);
	return(0);
}
