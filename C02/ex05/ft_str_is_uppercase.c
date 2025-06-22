/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:34:10 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/16 16:47:15 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 64 && str[i] < 91))
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
        char    str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char    str2[] = "A*CDEFGHIJKLMNOPQRSTUVWXYZ";

        ft_putnbr(ft_str_is_uppercase(str1));
        write(1, "\n", 1);
        ft_putnbr(ft_str_is_uppercase(str2));
        write(1, "\n", 1);

        return (0);
}*/
