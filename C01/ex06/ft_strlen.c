/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 03:12:59 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/21 04:05:44 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
  int main(void)
  {
      char *s;
      int guarda;
 
      s = "hello world";
      guarda = ft_strlen(s);
      printf("o valor é: %d\n", guarda);
      return(0);
  }*/
