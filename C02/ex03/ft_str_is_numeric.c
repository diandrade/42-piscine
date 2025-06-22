/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:35:09 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/16 16:39:14 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*void    ft_putnbr(int nb)
{
        nb = nb + '0';
        write(1, &nb, 1);       
}*/

/*int     main(void)
{
        char    str1[] = "1234567890";
        char    str2[] = "1*34567890";

        ft_putnbr(ft_str_is_numeric(str1));
        write(1, "\n", 1);
        ft_putnbr(ft_str_is_numeric(str2));
        write(1, "\n", 1);

        return (0);
}*/
