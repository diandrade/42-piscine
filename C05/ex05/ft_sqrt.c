/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <diandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:09:25 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/19 16:10:41 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*void	ft_putnbr(int nb)
{
	char	arr[10];
	int	i;

	if (nb == 0)
	{
		write(1, "0", 1);
	}

	if (nb < 0)
	{
		nb -= nb;
		write(1, "-", 1);
	}

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}

	i = 0;
	while(nb != 0)
	{
		arr[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}

	while(i--)
	{
		write(1, &arr[i], 1);
	}
	write (1, "\n", 1);
}

int	main(void)
{
	int	output;

	output = ft_sqrt(9);
	ft_putnbr(output);
}*/
