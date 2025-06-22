/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <diandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:18:53 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/19 10:46:14 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_fibonacci(int index)
{	
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

/*void	ft_putnbr(int nb)
{
	char	arr[12];
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

	output = ft_fibonacci(7);
	ft_putnbr(output);
}*/
