/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:39:09 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/21 04:01:53 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	vla;
	int	vlb;

	vla = *a;
	vlb = *b;
	*a = vla / vlb;
	*b = vla % vlb;
}
/*
int main()
{
	int *a;
	int *b;
	int c;
	int d;

	a = &c;
	b = &d;
	c = 10;
	d = 3;
	printf("valor c: %d, valor d:%d\n", c, d);
	ft_ultimate_div_mod(a, b);
	printf("resuldado da div: %d, resultado do resto: %d\n", c, d);
	return(0);
}*/
