/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielfe  <danielfe@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:36:49 by danielfe          #+#    #+#             */
/*   Updated: 2024/07/21 06:18:44 by danielfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	char_decision(int i, int j, int width, int height)
{
	if ((i == 1 && j == 1) || (i == height && j == width))
	{
		ft_putchar('A');
	}
	else if ((i == 1 && j == width) || (i == height && j == 1))
	{
		ft_putchar('C');
	}
	else if ((i != 1 && j != 1) && (i != height && j != width))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int width, int height)
{
	int	i;
	int	j;

	i = 1;
	while (i <= height)
	{
		j = 1;
		while (j <= width)
		{
			char_decision(i, j, width, height);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
