/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:43:13 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/17 20:56:45 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
        char    str1[] = "1234AbCd!@#$";
        char    str2[] = "1\n34AbCd!@#$";

        ft_putnbr(ft_str_is_printable(str1));
        write(1, "\n", 1);
        ft_putnbr(ft_str_is_printable(str2));
        write(1, "\n", 1);

        return (0);
}*/
