/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:52:08 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/16 17:32:41 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

/*void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while(str[i] != '\0')
        {
                write(1, &str[i], 1);
                i++;
        }
}*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int     main(void)
{
        char    str[] = "STRING";
        ft_putstr(str);
        ft_strlowcase(str);
        write(1, "\n", 1);
        ft_putstr(str);
        return (0);
}*/
