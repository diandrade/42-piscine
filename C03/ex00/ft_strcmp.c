/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:18:39 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/16 18:25:35 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*void    ft_putnbr(int nb)
{
        char    arr[10];
        int     i;

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
}*/

/*void	ft_putstr(char *arr)
{
	while (*arr)
	{
		write(1, arr++, 1);
	}
}*/

/*int	main(void)
{
	char	first_string[] = "Primeira palavra: ";
	char	second_string[] = "Segunda palavra: ";
	char	third_string[] = "O respectivo INT retornado após a 
	comparação entre os CHAR'S é: ";
	char	s1[] = "String";
	char	s2[] = "Strin";

	ft_putstr(first_string);
	ft_putstr(s1);
	write(1, "\n", 1);
	ft_putstr(second_string);
	ft_putstr(s2);
	write(1, "\n", 1);
	ft_putstr(third_string);
	ft_putnbr(ft_strcmp(s1, s2));
	return (0);
}*/
