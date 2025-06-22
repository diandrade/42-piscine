/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:40:19 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/16 16:43:42 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 96 && str[i] < 123))
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
        char    str1[] = "abcdefghijklmnopqrstuvwxyz";
        char    str2[] = "a*cdefghijklmnopqrstuvwxyz";

        ft_putnbr(ft_str_is_lowercase(str1));
        write(1, "\n", 1);
        ft_putnbr(ft_str_is_lowercase(str2));
        write(1, "\n", 1);

        return (0);
}*/
