/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:55:21 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/20 22:35:29 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{

	int a;
	int b;
	int c;
	int d;
	int *div;
	int *mod;
	
	div = &c;
	mod = &d;
	a = 10;
	b = 2;

	ft_div_mod(a, b, div, mod);
	printf("o resultado da div: %d, o resto da divisão: %d", c, d );
	return(0);
}
*/
