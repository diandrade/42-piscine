/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <diandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:13:19 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/19 10:47:25 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	result = 1;
	i = 2;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
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
	while (nb != 0)
	{
		arr[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}

	while (i--)
	{
		write(1, &arr[i], 1);
	}
	write (1, "\n", 1);
}

int	main(void)
{
	int	output;

	output = ft_iterative_factorial(7);
	ft_putnbr(output);
}*/
