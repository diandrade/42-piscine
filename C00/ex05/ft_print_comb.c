/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:30:45 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/11 19:11:43 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int i, int j, int k)
{
	write(1, &(char){i + 48}, 1);
	write(1, &(char){j + 48}, 1);
	write(1, &(char){k + 48}, 1);
	if (!(i == 7))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putnbr(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
