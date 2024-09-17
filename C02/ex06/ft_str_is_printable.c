/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:22:48 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/07/24 08:31:00 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}
/*                                                                              
 #include <stdio.h>                                                              

 int main(void)                                                                  
 {                                                                               
 	char np;                                                                    
 	char np1;                                                                   
 	char np2;                                                                   

 	np = 3;                                                                     
	np1 = 102; 
 	printf("aqui é pra printar 1: %d\n", ft_str_is_printable(&np2));         
 	printf("aqui é pra printar 0: %d\n", ft_str_is_printable(&np));             
 	printf("aqui é pra printar 1: %d\n", ft_str_is_printable(&np1));            
 }*/
