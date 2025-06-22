/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:40:25 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/11 19:23:13 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	conditionals(int *nb)
{
	if (*nb == 0)
	{
		write(1, "0", 1);
	}
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb = -*nb;
	}
	if (*nb == -2147483648)
	{
		write(1, "2147483648", 11);
		write(1, "\n", 1);
		*nb = 0;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	arr[10];

	conditionals(&nb);
	if (nb == 0)
	{
		return ;
	}
	i = 0;
	while (nb != 0)
	{
		arr[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &arr[i], 1);
	}
}

/*int	main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(42);
	return (0);
}*/
