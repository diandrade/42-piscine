/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:53:08 by diandrad          #+#    #+#             */
/*   Updated: 2025/06/16 17:33:04 by diandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

/*void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "string";	
	ft_putstr(str);
	ft_strupcase(str);
	write(1, "\n", 1);
	ft_putstr(str);
	return (0);
}*/
