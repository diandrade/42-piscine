/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:39:39 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/18 20:57:12 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	i;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	i = nb % 10 + '0';
	write(1, &i, 1);
}

/*int	main(void)
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;
	int	n5;

	n1 = 0;
	n2 = -2147483648;
	n3 = 2147483647;
	n4 = -1;
	n5 = 1;

	ft_putnbr(n1);
	write(1, "\n", 1);
	ft_putnbr(n2);
	write(1, "\n", 1);
	ft_putnbr(n3);
	write(1, "\n", 1);
	ft_putnbr(n4);
	write(1, "\n", 1);
	ft_putnbr(n5);	
}*/
