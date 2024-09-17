/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:34:31 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/08/07 15:57:20 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	temp = (int *)malloc((i) * sizeof(int));
	if (temp == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = temp;
	i = 0;
	while (max > min)
	{
		temp[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main() {
    int *range;
    int min = 5;
    int max = 10;
    int i, size;

    size = ft_ultimate_range(&range, min, max);

    if (size < 0) {
        printf("allocation error.\n");
    } else if (size == 0) {
        printf("no gap generated.\n");
    } else {
        printf("generated interval:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
    }
    free(range);

    return 0;
}*/
